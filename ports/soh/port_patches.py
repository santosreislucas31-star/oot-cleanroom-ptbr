"""Source changes to the SoH Emscripten fork (zalo/Shipwright feature/emscripten-web-port).

    python -m ports.soh.port_patches <sohweb checkout>

Idempotent text patches. Build flags (see STATUS.md) are passed by the build
script: -DFMT_CONSTEVAL= (old bundled fmt vs new clang), -DBUILD_SHARED_LIBS=OFF.
"""
import filecmp
import os
import shutil
import sys

PATCHES = [
    # 1. dev hooks: CVars from ?dev=name:value,... (applied when SoH applies its web config),
    #    current scene and player position for headless tests.
    ("soh/soh/web/web_main.cpp",
     "// Called from OTRGlobals.cpp after the CVar system is ready\nvoid web_apply_anchor_config() {\n    if (!web_has_anchor_config()) return;",
     """EM_JS(const char*, web_dev_cvars_get, (), {
    var s = (typeof window._devCvars === 'string') ? window._devCvars : '';
    var len = lengthBytesUTF8(s) + 1;
    var ptr = _malloc(len);
    stringToUTF8(s, ptr, len);
    return ptr;
});

static void web_apply_dev_cvars() {
    char* s = (char*)web_dev_cvars_get();
    char* save = NULL;
    for (char* tok = strtok_r(s, ",", &save); tok; tok = strtok_r(NULL, ",", &save)) {
        char* colon = strrchr(tok, ':');
        if (!colon) continue;
        *colon = 0;
        CVarSetInteger(tok, atoi(colon + 1));
        printf("[Web] dev cvar %s = %d\\n", tok, atoi(colon + 1));
    }
    free(s);
}

extern "C" PlayState* gPlayState;
static float s_web_pos[4];

extern "C" void Select_LoadGame(SelectContext* self, s32 entranceIndex);
extern "C" GameState* gGameState;

// dev: from the debug scene select, start play at an entrance (what the menu does on A)
extern "C" EMSCRIPTEN_KEEPALIVE int web_select_warp(int entrance) {
    if (gGameState == NULL || gPlayState != NULL) return -1;
    Select_LoadGame((SelectContext*)gGameState, entrance);
    return 0;
}

extern "C" EMSCRIPTEN_KEEPALIVE int web_console(const char* cmd) {
    std::string out;
    return Ship::Context::GetInstance()->GetConsole()->Run(std::string(cmd), &out);
}

extern "C" EMSCRIPTEN_KEEPALIVE int web_scene(void) {
    return gPlayState ? gPlayState->sceneNum : -1;
}

extern "C" EMSCRIPTEN_KEEPALIVE float* web_player_pos(void) {
    if (gPlayState && GET_PLAYER(gPlayState)) {
        Player* p = GET_PLAYER(gPlayState);
        s_web_pos[0] = p->actor.world.pos.x;
        s_web_pos[1] = p->actor.world.pos.y;
        s_web_pos[2] = p->actor.world.pos.z;
        s_web_pos[3] = 1;
    } else {
        s_web_pos[3] = 0;
    }
    return s_web_pos;
}

// Called from OTRGlobals.cpp after the CVar system is ready
void web_apply_anchor_config() {
    web_apply_dev_cvars();
    if (!web_has_anchor_config()) return;"""),
    ("soh/CMakeLists.txt",
     "_web_wants_text_input,_malloc,_free",
     "_web_wants_text_input,_web_scene,_web_player_pos,_web_console,_web_select_warp,_malloc,_free"),
    # 3. Cloud saves: wait for local IDBFS + optional cloud restore before game startup.
    ("soh/src/code/main.c",
     "    if (!web_is_idbfs_ready()) {\n        // IDBFS not yet loaded from IndexedDB - keep polling\n        return;\n    }",
     "    if (web_is_idbfs_ready() <= 0) {\n        // Local IndexedDB load is pending or failed; never start against uncertain save data.\n        return;\n    }\n    if (!web_cloud_startup_ready()) {\n        // Cloud restore choice/check is still pending.\n        return;\n    }"),
    ("soh/soh/web/web_main.h",
     "int web_is_idbfs_ready(void);",
     "int web_is_idbfs_ready(void);\nint web_cloud_startup_ready(void);"),
    ("soh/soh/web/web_main.cpp",
     "        // Signal C side that IDBFS is ready\n        setValue(_web_idbfs_ready_ptr(), 1, 'i32');",
     "        // 1 = loaded successfully; -1 = failed. Never treat a failed load as ready.\n        if (err) { console.error(\"[Web] IDBFS load failed:\", err); try { var n = document.getElementById(\"cr-idbfs-error\") || document.createElement(\"div\"); n.id = \"cr-idbfs-error\"; n.textContent = \"Falha ao carregar os saves locais. Atualize a página antes de tentar novamente.\"; n.style.cssText = \"position:fixed;top:60px;left:50%;transform:translateX(-50%);z-index:3000;padding:12px;background:#7f1d1d;color:white;border-radius:8px;font:14px sans-serif\"; document.body.appendChild(n); } catch(e) {} }\n        setValue(_web_idbfs_ready_ptr(), err ? -1 : 1, 'i32');"),
    ("soh/soh/web/web_main.cpp",
     "        \"if (typeof FS !== 'undefined' && FS.syncfs) {\"\n        \"  FS.syncfs(false, function(err) {\"\n        \"    if (err) console.error('[Web] FS.syncfs save failed:', err);\"\n        \"    else console.log('[Web] FS.syncfs save complete.');\"\n        \"  });\"\n        \"}\"",
     "        \"if (window.ootPersistIdbfs) window.ootPersistIdbfs();\"\n        \"else if (typeof FS !== 'undefined' && FS.syncfs) FS.syncfs(false, function(err) {\"\n        \"  if (err) console.error('[Web] FS.syncfs save failed:', err);\"\n        \"});\""),
    ("soh/soh/web/web_main.cpp",
     "int web_is_idbfs_ready(void) {\n    return s_idbfs_ready;\n}",
     "int web_is_idbfs_ready(void) {\n    return s_idbfs_ready;\n}\n\nEM_JS(int, web_cloud_startup_ready, (), {\n    if (!window.ootCloudSaves || typeof window.ootCloudSaves.startupStatus !== 'function') return 0;\n    return window.ootCloudSaves.startupStatus();\n});"),
    ("soh/soh/SaveManager.cpp",
     "    output << std::setw(1) << globalBlock << std::endl;",
     "    output << std::setw(1) << globalBlock << std::endl;\n    output.close();\n#ifdef __EMSCRIPTEN__\n    web_save_to_idb();\n#endif")
]


NL = chr(10)
INCLUDES = ("soh/soh/web/web_main.cpp", '#include "soh/Extractor/Extract.h"' + NL,
            NL.join(['#include "soh/Extractor/Extract.h"', 'extern "C" {', '#include "z64.h"',
                     '#include "functions.h"', '#include "macros.h"', '}', '']))


PTBR_SOURCE = os.path.join(os.path.dirname(__file__), "ptbr")
PTBR_DEST = os.path.join("soh", "soh", "Enhancements", "PTBR")
PTBR_FILES = (
    "PTBRData.cpp", "PTBRData_0000_0FFF.cpp", "PTBRData_1000_1FFF.cpp",
    "PTBRData_2000_3FFF.cpp", "PTBRData_4000_FFFF.cpp", "PTBRMessages.cpp",
    "PTBRData.h", "PTBRDataChunks.h", "PTBRMessages.h",
)


def install_ptbr_sources(root):
    """Copy the bundled PT-BR message table and glyph support into the SoH tree."""
    destination = os.path.join(root, PTBR_DEST)
    os.makedirs(destination, exist_ok=True)
    copied = 0
    for name in PTBR_FILES:
        source = os.path.join(PTBR_SOURCE, name)
        target = os.path.join(destination, name)
        if not os.path.isfile(source):
            raise FileNotFoundError("PT-BR source is missing: " + source)
        if not os.path.isfile(target) or not filecmp.cmp(source, target, shallow=False):
            shutil.copy2(source, target)
            copied += 1
    return copied


def main(argv):
    root = argv[1]
    copied = install_ptbr_sources(root)
    done = 0
    for rel, old, new in PATCHES + [INCLUDES]:
        p = os.path.join(root, rel)
        s = open(p, encoding="utf-8").read()
        if (new and new in s) or (not new and old not in s):
            continue                            # already applied
        if old not in s:
            raise RuntimeError(
                "Required web patch anchor not found in " + rel + ": " +
                old[:100].replace(NL, " ")
            )
        s = s.replace(old, new, 1)
        open(p, "w", encoding="utf-8", newline=NL).write(s)
        done += 1
    print(f"PT-BR files installed: {copied}; patches applied: {done}")


if __name__ == "__main__":
    main(sys.argv)
