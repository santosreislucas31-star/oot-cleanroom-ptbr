import assert from "node:assert/strict";
import { readFile } from "node:fs/promises";
import vm from "node:vm";

const source = await readFile(new URL("./cloud_saves.js", import.meta.url), "utf8");
const authListeners = [];
let storageCalls = 0;
const statusNode = { textContent: "" };
const fakeSupabase = {
  auth: {
    onAuthStateChange(callback) {
      authListeners.push(callback);
    },
    async getSession() {
      return { data: { session: null }, error: null };
    },
    async getUser() {
      throw new Error("getUser must not run after the game has started offline");
    },
  },
  storage: {
    from() {
      storageCalls += 1;
      throw new Error("Cloud storage must remain disabled until reload");
    },
  },
};
const fakeFS = {
  syncfs(_populate, callback) {
    callback(null);
  },
};
const context = {
  window: { ootSupabase: fakeSupabase },
  document: {
    querySelector() {
      return statusNode;
    },
    getElementById() {
      return null;
    },
  },
  FS: fakeFS,
  console,
  setTimeout,
  clearTimeout,
  Date,
  Promise,
  Uint8Array,
  Array,
  Object,
  Map,
  Set,
  RegExp,
  Error,
};

vm.createContext(context);
vm.runInContext(source, context, { filename: "cloud_saves.js" });
await new Promise(resolve => setTimeout(resolve, 25));

assert.equal(context.window.ootCloudSaves.startupStatus(), 1);
assert.equal(authListeners.length, 1);

// Sign in with another account only after the game has started in local mode.
authListeners[0]("SIGNED_IN", { user: { id: "account-b" } });
await new Promise(resolve => setTimeout(resolve, 25));

assert.match(statusNode.textContent, /recarregue/i);
context.window.ootCloudSaves.persistLocalFiles();
await new Promise(resolve => setTimeout(resolve, 25));
assert.equal(storageCalls, 0);

console.log("PASS: signing into another account after local startup cannot upload the existing local save.");
