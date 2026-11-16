"""Assemble the web site with the SoH runtime archive and local ROM extraction.

    python ports/soh/make_site.py <soh build dir (build-web/soh)> <soh.o2r> <site dir>

The site ships only soh.o2r. Players select their own ROM; ZAPD extracts its
assets locally in the browser and the resulting oot.o2r is kept in IndexedDB.
"""
import os
import re
import shutil
import sys

HERE = os.path.dirname(os.path.abspath(__file__))


def main(argv):
    build, soh_o2r, site = argv[1:4]
    os.makedirs(site, exist_ok=True)
    required = ("soh.html", "soh.js", "soh.wasm", "soh.data")
    missing = [f for f in required if not os.path.isfile(os.path.join(build, f))]
    if missing:
        raise FileNotFoundError("Missing required Emscripten output(s): " + ", ".join(missing))
    for f in required:
        source = os.path.join(build, f)
        if os.path.isfile(source):
            shutil.copyfile(source, os.path.join(site, f))
    shutil.copyfile(soh_o2r, os.path.join(site, "soh.o2r"))
    # Keep the optional browser auth module beside index.html.
    for module in ("cloud_auth.js", "cloud_saves.js"):
        source = os.path.join(HERE, module)
        if os.path.isfile(source):
            shutil.copyfile(source, os.path.join(site, module))
    html = open(os.path.join(build, "soh.html"), encoding="utf-8").read()
    # default boot: the authentic N64-logo -> title sequence (SoH's own ship logo stalls on some hosts)
    boot = ("<script>window._devCvars='gSettings.BootSequence:1';try{var _dv=new URLSearchParams(location.search).get('dev');"
            "if(_dv)window._devCvars=_dv;}catch(e){}</script>")
    html = html.replace("<head>", "<head>" + boot, 1)
    html = re.sub(r"<title>[^<]*</title>", "<title>Ocarina of Time PT-BR</title>", html)
    html = html.replace("<h1>Ship of Harkinian</h1>", "<h1>Ocarina of Time &mdash; PT-BR</h1>")
    html = html.replace("WebAssembly Port", "Ship of Harkinian web build &middot; recursos extra&iacute;dos localmente da sua ROM")
    # A new cache namespace prevents an old clean-room oot.o2r from being reused.
    html = html.replace("var OTR_DB_NAME = 'soh_otr_files';",
                        "var OTR_DB_NAME = 'soh_otr_files_local_rom_v1';")
    # Do not treat the cached soh.o2r alone as a complete game installation.
    html = html.replace("if (keys.length > 0) {",
                        "if (keys.some(function(key) { return key === 'oot.o2r' || key === 'oot-mq.o2r'; })) {")
    # this site still downloads its small SoH runtime archive; retry interrupted downloads.
    html = html.replace('showError("Download failed: "+r.join(", ")),hideProgress()',
                        'setStatus("Download interrupted, retrying..."),setTimeout(function(){location.reload()},4000)')
    # a click or tap while the game is still loading called into the wasm module before its
    # runtime was up, which aborts it for good: ask only once the runtime is initialised
    html = html.replace("onRuntimeInitialized: function() {", "onRuntimeInitialized: function() { window._rtReady = true;", 1)
    html = html.replace("if (Module && Module._web_wants_text_input)",
                        "if (Module && window._rtReady && Module._web_wants_text_input)")
    html = html.replace("Click or drag to load game files", "Selecione sua ROM de Ocarina of Time")
    html = html.replace("Requires soh.o2r and either oot.o2r or a .z64 ROM", "Sua ROM n&atilde;o ser&aacute; enviada; a extra&ccedil;&atilde;o ocorre neste navegador.")
    html = html.replace("Missing oot.o2r — please upload an OoT archive.", "Selecione sua ROM de Ocarina of Time (.z64, .n64 ou .v64) para extrair os recursos neste navegador.")
    extra = os.path.join(HERE, "site_extra.html")
    if os.path.exists(extra):
        html = html.replace("</body>", open(extra, encoding="utf-8").read() + "</body>")
    open(os.path.join(site, "index.html"), "w", encoding="utf-8").write(html)
    print("site:", sorted(os.listdir(site)))


if __name__ == "__main__":
    main(sys.argv)
