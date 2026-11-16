import assert from "node:assert/strict";
import { readFile } from "node:fs/promises";
import vm from "node:vm";

const source = await readFile(new URL("./cloud_saves.js", import.meta.url), "utf8");

async function createRuntime({ session = null, localFiles = [] } = {}) {
  const authListeners = [];
  let storageUploads = 0;
  let activePanel = null;
  const statusNode = { textContent: "" };
  const panelNodes = new Map();

  const panel = {
    id: "",
    style: {},
    innerHTML: "",
    querySelector(selector) {
      if (!panelNodes.has(selector)) panelNodes.set(selector, { disabled: false, textContent: "", onclick: null });
      return panelNodes.get(selector);
    },
    remove() {
      if (activePanel === this) activePanel = null;
    },
  };

  const fakeSupabase = {
    auth: {
      onAuthStateChange(callback) {
        authListeners.push(callback);
      },
      async getSession() {
        return { data: { session }, error: null };
      },
      async getUser() {
        return { data: { user: session && session.user }, error: null };
      },
    },
    storage: {
      from() {
        return {
          async list() {
            return { data: [], error: null };
          },
          async upload() {
            storageUploads += 1;
            return { data: {}, error: null };
          },
        };
      },
    },
  };

  const fakeFS = {
    syncfs(_populate, callback) {
      callback(null);
    },
    readdir() {
      return localFiles;
    },
    readFile() {
      return new Uint8Array([1, 2, 3, 4]);
    },
    writeFile() {},
    unlink() {},
  };

  const document = {
    querySelector() {
      return statusNode;
    },
    getElementById(id) {
      return activePanel && activePanel.id === id ? activePanel : null;
    },
    createElement() {
      return panel;
    },
    body: {
      appendChild(element) {
        activePanel = element;
      },
    },
  };

  const window = { ootSupabase: fakeSupabase };
  const log = { log() {}, warn() {}, error() {}, info() {} };
  const context = {
    window, document, FS: fakeFS, console: log,
    setTimeout, clearTimeout, Date, Promise, Uint8Array,
    Array, Object, Map, Set, RegExp, Error,
  };

  vm.createContext(context);
  vm.runInContext(source, context, { filename: "cloud_saves.js" });
  await new Promise(resolve => setTimeout(resolve, 30));

  return {
    window,
    statusNode,
    authListeners,
    getPanel: () => activePanel,
    getNode: selector => panelNodes.get(selector),
    getStorageUploads: () => storageUploads,
  };
}

// Case 1: the game starts offline, then another account signs in.
// The existing local save must not be uploaded to that account.
{
  const runtime = await createRuntime({ localFiles: ["file1.sav"] });
  assert.equal(runtime.window.ootCloudSaves.startupStatus(), 1);
  runtime.authListeners[0]("SIGNED_IN", { user: { id: "account-b" } });
  await new Promise(resolve => setTimeout(resolve, 30));
  assert.match(runtime.statusNode.textContent, /recarregue/i);
  runtime.window.ootCloudSaves.persistLocalFiles();
  await new Promise(resolve => setTimeout(resolve, 30));
  assert.equal(runtime.getStorageUploads(), 0);
}

// Case 2: a signed-in account has no cloud backup, but this browser has a save.
// Startup must wait for explicit consent before linking it to the account.
{
  const runtime = await createRuntime({
    session: { user: { id: "account-a" } },
    localFiles: ["file1.sav"],
  });
  assert.equal(runtime.window.ootCloudSaves.startupStatus(), 0);
  assert.ok(runtime.getPanel(), "local-save consent dialog should be visible");
  assert.match(runtime.getNode("[data-cloud-message]").textContent, /pode pertencer a outra conta/i);
  runtime.getNode("[data-cloud-link]").onclick();
  assert.equal(runtime.window.ootCloudSaves.startupStatus(), 1);
}

// Case 3: choosing local-only mode preserves the local save without cloud upload.
{
  const runtime = await createRuntime({
    session: { user: { id: "account-c" } },
    localFiles: ["file1.sav"],
  });
  assert.equal(runtime.window.ootCloudSaves.startupStatus(), 0);
  runtime.getNode("[data-cloud-local-only]").onclick();
  assert.equal(runtime.window.ootCloudSaves.startupStatus(), 1);
  runtime.window.ootCloudSaves.persistLocalFiles();
  await new Promise(resolve => setTimeout(resolve, 30));
  assert.equal(runtime.getStorageUploads(), 0);
}

console.log("PASS: account switching and local-save consent are enforced before cloud sync.");
