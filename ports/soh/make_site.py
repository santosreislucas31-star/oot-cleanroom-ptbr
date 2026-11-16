"""Assemble and verify the browser site after Emscripten minification.

    python ports/soh/make_site.py <soh build dir> <soh.o2r> <site dir>

Only the engine runtime archive is shipped. Each player extracts game assets
from their own ROM in the browser; no ROM or per-user oot.o2r is distributed.
"""
import os
import re
import shutil
import sys
import zipfile

HERE = os.path.dirname(os.path.abspath(__file__))
CACHE_DB_NAME = "soh_otr_files_local_rom_v1"


def replace_literal_required(html, old, new, label):
    count = html.count(old)
    if count != 1:
        raise RuntimeError(
            "Expected exactly one occurrence for HTML text patch " + label + "; found " + str(count)
        )
    return html.replace(old, new, 1)


def replace_required(pattern, replacement, html, label, flags=0):
    matches = list(re.finditer(pattern, html, flags))
    if len(matches) != 1:
        raise RuntimeError(
            "Expected exactly one match for HTML patch " + label + "; found " + str(len(matches))
        )
    return re.sub(pattern, replacement, html, count=1, flags=flags)


def patch_generated_html(html):
    # Emscripten minifies shell.html. Match both minified and readable forms;
    # never allow a replacement to fail silently.
    html = replace_required(
        r"(\bOTR_DB_NAME\s*=\s*)['\"]soh_otr_files['\"]",
        lambda match: match.group(1) + "'" + CACHE_DB_NAME + "'",
        html,
        "isolated IndexedDB cache namespace",
    )

    # The cached engine archive alone is not a complete game installation.
    start = html.find("function checkCachedOtr")
    if start < 0:
        raise RuntimeError("Generated HTML is missing checkCachedOtr()")
    end = html.find("document.getElementById", start)
    if end < 0:
        raise RuntimeError("Could not delimit generated checkCachedOtr()")
    cache_function = html[start:end]
    cache_function = replace_required(
        r"if\s*\(\s*([A-Za-z_$][A-Za-z0-9_$]*)\.length\s*>\s*0\s*\)\s*\{",
        lambda match: (
            "if (" + match.group(1) +
            ".some(function(key) { return key === 'oot.o2r' || key === 'oot-mq.o2r'; })) {"
        ),
        cache_function,
        "cache requires a ROM-derived OOT archive",
    )
    html = html[:start] + cache_function + html[end:]

    # Prevent UI handlers from calling a WebAssembly export before runtime init.
    html = replace_required(
        r"(\bonRuntimeInitialized\s*:\s*function\s*\(\s*\)\s*\{)",
        r"\1window._rtReady = true; var romInput = document.getElementById('otr-file'); if (romInput) romInput.disabled = false;",
        html,
        "WebAssembly runtime-ready flag",
    )
    html = replace_required(
        r"if\s*\(\s*Module\s*&&\s*Module\._web_wants_text_input\s*\)",
        "if (Module && window._rtReady && Module._web_wants_text_input)",
        html,
        "text-input handler runtime guard",
    )
    html = replace_required(
        r"(<input\b[^>]*\bid\s*=\s*['\"]?otr-file['\"]?[^>]*)(>)",
        r"\1 disabled\2",
        html,
        "disable ROM picker until runtime is ready",
    )
    html = replace_required(
        r"(function\s+handleOtrFiles\s*\(\s*[A-Za-z_$][A-Za-z0-9_$]*\s*\)\s*\{)",
        r"\1if (!window._rtReady) { setStatus('Aguarde o carregamento antes de selecionar a ROM.'); return; }",
        html,
        "drag-and-drop waits for runtime",
    )

    picker_start = html.find('id=otr-file')
    if picker_start < 0:
        picker_start = html.find('id="otr-file"')
    picker_end = html.find(">", picker_start) if picker_start >= 0 else -1
    picker_html = html[picker_start:picker_end] if picker_end >= 0 else ""

    checks = {
        "new cache namespace": CACHE_DB_NAME in html,
        "old cache namespace absent": all(
            old not in html for old in (
                "OTR_DB_NAME='soh_otr_files'",
                'OTR_DB_NAME="soh_otr_files"',
                "OTR_DB_NAME = 'soh_otr_files'",
                'OTR_DB_NAME = "soh_otr_files"',
            )
        ),
        "cache gate requires vanilla or MQ OOT archive": (
            "key === 'oot.o2r'" in html and "key === 'oot-mq.o2r'" in html
        ),
        "runtime-ready flag": "window._rtReady = true;" in html,
        "ROM picker enabled after runtime": "romInput.disabled = false;" in html,
        "drag-and-drop blocked before runtime": "Aguarde o carregamento antes de selecionar a ROM." in html,
        "ROM picker initially disabled": picker_start >= 0 and "disabled" in picker_html,
        "ROM extraction export": "Module._web_extract_rom" in html,
        "exact OTR buffer slice": bool(re.search(
            r"\.buffer\.slice\([^)]*\.byteOffset[^)]*\.byteLength", html
        )),
    }
    failed = [name for name, passed in checks.items() if not passed]
    if failed:
        raise RuntimeError("Generated HTML verification failed: " + ", ".join(failed))
    return html


def main(argv):
    if len(argv) != 4:
        raise SystemExit(
            "Usage: python ports/soh/make_site.py <soh build dir> <soh.o2r> <site dir>"
        )
    build, soh_o2r, site = argv[1:4]
    os.makedirs(site, exist_ok=True)

    required = ("soh.html", "soh.js", "soh.wasm", "soh.data")
    missing = [name for name in required if not os.path.isfile(os.path.join(build, name))]
    if missing:
        raise FileNotFoundError("Missing required Emscripten output(s): " + ", ".join(missing))
    if not os.path.isfile(soh_o2r) or os.path.getsize(soh_o2r) == 0:
        raise FileNotFoundError("Missing or empty soh.o2r runtime archive")
    try:
        with zipfile.ZipFile(soh_o2r) as archive:
            names = archive.namelist()
            if not names or "portVersion" not in names:
                raise RuntimeError("soh.o2r is missing required archive entries")
            corrupt = archive.testzip()
            if corrupt:
                raise RuntimeError("Corrupt entry in soh.o2r: " + corrupt)
    except zipfile.BadZipFile as error:
        raise RuntimeError("soh.o2r is not a valid ZIP/OTR archive") from error

    # Copy only runtime assets. The unmodified upstream soh.html is deliberately
    # omitted: index.html is the single patched, PT-BR entry point.
    for name in ("soh.js", "soh.wasm", "soh.data"):
        shutil.copyfile(os.path.join(build, name), os.path.join(site, name))
    shutil.copyfile(soh_o2r, os.path.join(site, "soh.o2r"))

    for module in ("cloud_auth.js", "cloud_saves.js"):
        source = os.path.join(HERE, module)
        if not os.path.isfile(source):
            raise FileNotFoundError("Required browser module is missing: " + source)
        shutil.copyfile(source, os.path.join(site, module))

    with open(os.path.join(build, "soh.html"), encoding="utf-8") as source_html:
        html = source_html.read()
    boot = (
        "<script>window._devCvars='gSettings.BootSequence:1';try{var _dv=new URLSearchParams(location.search).get('dev');"
        "if(_dv)window._devCvars=_dv;}catch(e){}</script>"
    )
    if "<head>" not in html:
        raise RuntimeError("Generated HTML has no <head> element")
    html = html.replace("<head>", "<head>" + boot, 1)
    html, title_count = re.subn(r"<title>[^<]*</title>", "<title>Ocarina of Time PT-BR</title>", html, count=1)
    if title_count != 1:
        raise RuntimeError("Could not set the PT-BR page title")
    html = replace_literal_required(
        html, "<h1>Ship of Harkinian</h1>",
        "<h1>Ocarina of Time &mdash; PT-BR</h1>", "PT-BR heading",
    )
    html = replace_literal_required(
        html, "WebAssembly Port",
        "Ship of Harkinian web build &middot; recursos extra&iacute;dos localmente da sua ROM",
        "local-ROM subtitle",
    )
    html = replace_literal_required(
        html, "Click or drag to load game files",
        "Selecione sua ROM de Ocarina of Time", "ROM picker label",
    )
    html = replace_literal_required(
        html, "Requires soh.o2r and either oot.o2r or a .z64 ROM",
        "Sua ROM n&atilde;o ser&aacute; enviada; a extra&ccedil;&atilde;o ocorre neste navegador.",
        "local ROM privacy notice",
    )
    html = replace_literal_required(
        html, "Missing oot.o2r — please upload an OoT archive.",
        "Selecione sua ROM de Ocarina of Time (.z64, .n64 ou .v64) para extrair os recursos neste navegador.",
        "missing ROM guidance",
    )

    extra = os.path.join(HERE, "site_extra.html")
    if not os.path.isfile(extra):
        raise FileNotFoundError("Required site UI is missing: " + extra)
    if "</body>" not in html:
        raise RuntimeError("Generated HTML has no </body> element")
    with open(extra, encoding="utf-8") as extra_html:
        html = html.replace("</body>", extra_html.read() + "</body>", 1)
    html = patch_generated_html(html)

    output_html = os.path.join(site, "index.html")
    with open(output_html, "w", encoding="utf-8", newline="\n") as output:
        output.write(html)

    expected = {
        "index.html", "soh.js", "soh.wasm", "soh.data", "soh.o2r",
        "cloud_auth.js", "cloud_saves.js",
    }
    actual = set(os.listdir(site))
    if actual != expected:
        raise RuntimeError(
            "Unexpected site artifact contents. Missing: " +
            ", ".join(sorted(expected - actual)) +
            "; extra: " + ", ".join(sorted(actual - expected))
        )
    for name in expected:
        path = os.path.join(site, name)
        if os.path.getsize(path) == 0:
            raise RuntimeError("Generated site file is empty: " + name)

    with open(os.path.join(site, "soh.js"), encoding="utf-8") as runtime_file:
        runtime_js = runtime_file.read()
    if "soh.wasm" not in runtime_js or "soh.data" not in runtime_js:
        raise RuntimeError("Emscripten loader does not reference both soh.wasm and soh.data")
    if not any(marker in html for marker in ("src=soh.js", 'src="soh.js"', "src='soh.js'")):
        raise RuntimeError("index.html does not load soh.js")
    for module in ("cloud_auth.js", "cloud_saves.js"):
        if module not in html:
            raise RuntimeError("index.html does not load " + module)
    if "soh.o2r" not in html or "Module._web_extract_rom" not in html:
        raise RuntimeError("index.html is missing the engine archive or local ROM extraction")

    print("Verified site files:", sorted(actual))
    print("Verified cache namespace:", CACHE_DB_NAME)
    print("Verified cache requires oot.o2r or oot-mq.o2r")
    print("Verified ROM extraction and runtime-ready guards")


if __name__ == "__main__":
    main(sys.argv)
