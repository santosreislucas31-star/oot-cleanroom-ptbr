import assert from "node:assert/strict";
import { readFile } from "node:fs/promises";
import vm from "node:vm";

const source = await readFile(new URL("./cloud_assets.js", import.meta.url), "utf8");

async function createRuntime({ session = null, cacheKeys = [], objects = {} } = {}) {
  const downloads = [];
  const cached = [];
  const statusNode = { textContent: "" };
  let moduleReady = 0;

  const user = session && session.user ? session.user : null;
  const supabase = {
    auth: {
      async getSession() {
        return { data: { session }, error: null };
      },
      async getUser() {
        return { data: { user }, error: null };
      },
    },
    storage: {
      from(bucket) {
        assert.equal(bucket, "game-assets");
        return {
          async download(path) {
            downloads.push(path);
            if (Object.hasOwn(objects, path)) return objects[path];
            return { data: null, error: { statusCode: "404", message: "Object not found" } };
          },
        };
      },
    },
  };

  const window = {
    ootSupabase: supabase,
    _resolveOotCloudAssetsModule() { moduleReady += 1; },
    async listCachedFiles() { return cacheKeys; },
    async cacheFile(name, buffer) { cached.push({ name, size: buffer.byteLength }); },
  };

  const context = {
    window,
    document: { querySelector() { return statusNode; } },
    console: { log() {}, warn() {}, error() {}, info() {} },
    Promise, Uint8Array, ArrayBuffer, Blob, Object, String, Error,
  };
  vm.createContext(context);
  vm.runInContext(source, context, { filename: "cloud_assets.js" });

  return {
    window, statusNode, downloads, cached,
    getModuleReady: () => moduleReady,
  };
}

// Authenticated user: download private vanilla archive, cache it, and write it to FS.
{
  const runtime = await createRuntime({
    session: { user: { id: "user-123" } },
    objects: {
      "user-123/oot.o2r": { data: new Blob([new Uint8Array([1, 2, 3, 4])]), error: null },
    },
  });
  const result = await runtime.window.ootCloudAssets.prepare();
  assert.equal(result, true);
  assert.deepEqual(runtime.downloads, ["user-123/oot.o2r"]);
  assert.deepEqual(runtime.cached, [{ name: "oot.o2r", size: 4 }]);
  assert.match(runtime.statusNode.textContent, /carregados/i);
  assert.equal(runtime.getModuleReady(), 1);
}

// A local OOT archive takes precedence and prevents an unnecessary cloud download.
{
  const runtime = await createRuntime({
    session: { user: { id: "user-123" } },
    cacheKeys: ["soh.o2r", "oot.o2r"],
  });
  assert.equal(await runtime.window.ootCloudAssets.prepare(), false);
  assert.deepEqual(runtime.downloads, []);
}

// Signed-out users retain the existing local-ROM flow.
{
  const runtime = await createRuntime();
  assert.equal(await runtime.window.ootCloudAssets.prepare(), false);
  assert.deepEqual(runtime.downloads, []);
  assert.match(runtime.statusNode.textContent, /entre com github/i);
}

// If vanilla is absent, the module also supports an uploaded Master Quest archive.
{
  const runtime = await createRuntime({
    session: { user: { id: "user-456" } },
    objects: {
      "user-456/oot-mq.o2r": { data: new Blob([new Uint8Array([5, 6, 7])]), error: null },
    },
  });
  assert.equal(await runtime.window.ootCloudAssets.prepare(), true);
  assert.deepEqual(runtime.downloads, ["user-456/oot.o2r", "user-456/oot-mq.o2r"]);
  assert.deepEqual(runtime.cached, [{ name: "oot-mq.o2r", size: 3 }]);
}

console.log("PASS: private OOT assets download, cache, account validation, and local fallback.");
