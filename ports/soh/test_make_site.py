"""Fast regression tests for post-Emscripten site assembly.

Run before the expensive C++/WASM build:
    python3 -m unittest ports.soh.test_make_site
"""
import os
import tempfile
import unittest
import zipfile

from ports.soh.make_site import CACHE_DB_NAME, main, patch_generated_html


MINIFIED_HTML = r"""
<html><head><title>Ship of Harkinian - Web</title></head><body>
<h1>Ship of Harkinian</h1><p class="subtitle">WebAssembly Port</p>
<p>Click or drag to load game files</p>
<p>Requires soh.o2r and either oot.o2r or a .z64 ROM</p>
<p>Missing oot.o2r — please upload an OoT archive.</p>
<input id=otr-file accept=.otr,.o2r,.z64,.n64,.v64 multiple type=file>
<script>
var OTR_DB_NAME="soh_otr_files",OTR_DB_STORE="otr";
function checkCachedOtr(){listCachedFiles().then((function(e){if(e.length>0){showProgress()}}))}
document.getElementById("otr-file").addEventListener("change",function(){});
function handleOtrFiles(e){showProgress()}
var Module={onRuntimeInitialized:function(){startGame()}};
function t(){try{if(Module&&Module._web_wants_text_input){Module._web_wants_text_input()}}catch(e){}}
Module._web_extract_rom("/rom.z64","/oot.o2r");
var o2rBuffer=o2rData.buffer.slice(o2rData.byteOffset,o2rData.byteOffset+o2rData.byteLength);
</script><script async src=soh.js></script></body></html>
"""


READABLE_HTML = r"""
<html><head><title>Ship of Harkinian - Web</title></head><body>
<h1>Ship of Harkinian</h1><p class="subtitle">WebAssembly Port</p>
<p>Click or drag to load game files</p>
<p>Requires soh.o2r and either oot.o2r or a .z64 ROM</p>
<p>Missing oot.o2r — please upload an OoT archive.</p>
<input id="otr-file" accept=".otr,.o2r,.z64,.n64,.v64" multiple type="file">
<script>
var OTR_DB_NAME = 'soh_otr_files';
function checkCachedOtr() {
  listCachedFiles().then(function(keys) {
    if (keys.length > 0) { showProgress(); }
  });
}
document.getElementById("otr-file").addEventListener("change", function() {});
function handleOtrFiles(e) { showProgress(); }
var Module = { onRuntimeInitialized: function() { startGame(); } };
function t() { try { if (Module && Module._web_wants_text_input) { Module._web_wants_text_input(); } } catch (e) {} }
Module._web_extract_rom("/rom.z64", "/oot.o2r");
var o2rBuffer = o2rData.buffer.slice(o2rData.byteOffset, o2rData.byteOffset + o2rData.byteLength);
</script></body></html>
"""


class GeneratedHtmlPatchTests(unittest.TestCase):
    def assert_patched(self, source):
        result = patch_generated_html(source)
        self.assertIn(CACHE_DB_NAME, result)
        self.assertNotIn('OTR_DB_NAME="soh_otr_files"', result)
        self.assertIn("key === 'oot.o2r'", result)
        self.assertIn("key === 'oot-mq.o2r'", result)
        self.assertIn("window._rtReady = true;", result)
        self.assertIn("romInput.disabled = false;", result)
        self.assertIn("Aguarde o carregamento antes de selecionar a ROM.", result)
        self.assertIn("disabled", result[result.find("id=otr-file"):result.find(">", result.find("id=otr-file"))])
        self.assertIn("Module && window._rtReady && Module._web_wants_text_input", result)
        return result

    def test_minified_emscripten_html(self):
        self.assert_patched(MINIFIED_HTML)

    def test_readable_emscripten_html(self):
        self.assert_patched(READABLE_HTML)

    def test_missing_cache_anchor_fails_closed(self):
        broken = MINIFIED_HTML.replace("if(e.length>0){", "if(true){")
        with self.assertRaisesRegex(RuntimeError, "cache requires a ROM-derived OOT archive"):
            patch_generated_html(broken)

    def test_site_assembly_emits_only_the_patched_entry_point(self):
        with tempfile.TemporaryDirectory() as temp:
            build = os.path.join(temp, "build")
            site = os.path.join(temp, "site")
            os.makedirs(build)
            with open(os.path.join(build, "soh.html"), "w", encoding="utf-8") as file:
                file.write(MINIFIED_HTML)
            for name in ("soh.js", "soh.wasm", "soh.data"):
                with open(os.path.join(build, name), "wb") as file:
                    file.write(b"soh.wasm soh.data" if name == "soh.js" else b"fixture")
            runtime = os.path.join(temp, "soh.o2r")
            with zipfile.ZipFile(runtime, "w") as archive:
                archive.writestr("portVersion", "1.0")
            main(["make_site.py", build, runtime, site])
            self.assertEqual(
                set(os.listdir(site)),
                {"index.html", "soh.js", "soh.wasm", "soh.data", "soh.o2r", "cloud_auth.js", "cloud_saves.js"},
            )
            with open(os.path.join(site, "index.html"), encoding="utf-8") as file:
                output = file.read()
            self.assertIn(CACHE_DB_NAME, output)
            self.assertNotIn("<h1>Ship of Harkinian</h1>", output)


if __name__ == "__main__":
    unittest.main()
