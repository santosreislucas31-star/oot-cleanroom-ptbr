const BUCKET = "Game-Saves";
const SAVE_DIR = "/Save";
const SAVE_NAME = /^file\d+\.sav$/;
const MANIFEST_NAME = "manifest.json";

let currentUser = null;
let startupState = 0; // 0 = waiting for a decision, 1 = safe to start
let startupFinished = false;
let initializedUserId = null;
let syncRunning = false;
let syncQueued = false;
let backupTimer = null;
let lastFingerprint = "";
let authGeneration = 0;

const supabase = window.ootSupabase;

function getFS() {
  if (typeof FS !== "undefined") return FS;
  return window.FS || null;
}

function setStatus(message) {
  const node = document.querySelector("[data-cloud-status]");
  if (node) node.textContent = message;
}

function showRestoreChoice(backup) {
  let panel = document.getElementById("cr-cloud-choice");
  if (!panel) {
    panel = document.createElement("div");
    panel.id = "cr-cloud-choice";
    panel.style.cssText = "position:fixed;inset:0;z-index:2000;display:flex;align-items:center;justify-content:center;background:rgba(0,0,0,.78);font:15px/1.5 -apple-system,Segoe UI,sans-serif;color:#edf2f7";
    panel.innerHTML = '<div style="width:min(440px,calc(100% - 32px));padding:24px;border:1px solid #526071;border-radius:12px;background:#111923;box-shadow:0 16px 60px #000"><h2 style="margin:0 0 10px;font-size:20px">Backup encontrado</h2><p data-cloud-message style="margin:0 0 18px;color:#c4ced9">Existe um save na nuvem. Como deseja iniciar?</p><div style="display:flex;gap:10px;flex-wrap:wrap"><button data-cloud-restore style="padding:10px 14px;border:0;border-radius:6px;background:#238636;color:white;cursor:pointer">Restaurar da nuvem</button><button data-cloud-local style="padding:10px 14px;border:1px solid #64748b;border-radius:6px;background:#26313d;color:white;cursor:pointer">Usar save local nesta conta</button></div></div>';
    document.body.appendChild(panel);
  }
  const message = panel.querySelector("[data-cloud-message]");
  const restore = panel.querySelector("[data-cloud-restore]");
  const local = panel.querySelector("[data-cloud-local]");
  message.textContent = "Backup de " + new Date(backup.createdAt || Date.now()).toLocaleString() + ". O save local deste navegador pode ser de outra conta; restaure da nuvem para evitar misturar progressos.";
  restore.disabled = false;
  local.disabled = false;
  restore.onclick = async () => {
    restore.disabled = true;
    local.disabled = true;
    message.textContent = "Baixando e verificando os arquivos...";
    try {
      const restoreUserId = currentUser && currentUser.id;
      await restoreBackup(backup, restoreUserId);
      panel.remove();
      startupState = 1;
      setStatus("Save restaurado da nuvem");
    } catch (error) {
      console.error("[Cloud Save] Restore failed:", error);
      message.textContent = "Não foi possível restaurar: " + error.message + ". Você ainda pode continuar com o save local.";
      restore.disabled = false;
      local.disabled = false;
    }
  };
  local.onclick = () => {
    panel.remove();
    startupState = 1;
    setStatus("Usando save local");
  };
}

function showNoBackupChoice(expectedUserId) {
  let panel = document.getElementById("cr-cloud-choice");
  if (!panel) {
    panel = document.createElement("div");
    panel.id = "cr-cloud-choice";
    panel.style.cssText = "position:fixed;inset:0;z-index:2000;display:flex;align-items:center;justify-content:center;background:rgba(0,0,0,.78);font:15px/1.5 -apple-system,Segoe UI,sans-serif;color:#edf2f7";
    panel.innerHTML = '<div style="width:min(440px,calc(100% - 32px));padding:24px;border:1px solid #526071;border-radius:12px;background:#111923;box-shadow:0 16px 60px #000"><h2 style="margin:0 0 10px;font-size:20px">Save local encontrado</h2><p data-cloud-message style="margin:0 0 18px;color:#c4ced9"></p><div style="display:flex;gap:10px;flex-wrap:wrap"><button data-cloud-link style="padding:10px 14px;border:0;border-radius:6px;background:#238636;color:white;cursor:pointer">Vincular save local à conta</button><button data-cloud-local-only style="padding:10px 14px;border:1px solid #64748b;border-radius:6px;background:#26313d;color:white;cursor:pointer">Continuar só localmente</button></div></div>';
    document.body.appendChild(panel);
  }
  const message = panel.querySelector("[data-cloud-message]");
  const link = panel.querySelector("[data-cloud-link]");
  const localOnly = panel.querySelector("[data-cloud-local-only]");
  message.textContent = "Esta conta ainda não tem backup, mas existe progresso salvo neste navegador. Como o save local pode pertencer a outra conta, escolha explicitamente se deseja vinculá-lo.";
  link.disabled = false;
  localOnly.disabled = false;
  link.onclick = () => {
    if (!currentUser || currentUser.id !== expectedUserId) return;
    panel.remove();
    startupState = 1;
    setStatus("Save local vinculado a esta conta");
  };
  localOnly.onclick = () => {
    if (!currentUser || currentUser.id !== expectedUserId) return;
    currentUser = null;
    panel.remove();
    startupState = 1;
    setStatus("Save local mantido — nuvem desativada nesta sessão");
  };
}

async function sha256(bytes) {
  const view = bytes instanceof Uint8Array ? bytes : new Uint8Array(bytes);
  const digest = await crypto.subtle.digest("SHA-256", view);
  return Array.from(new Uint8Array(digest), b => b.toString(16).padStart(2, "0")).join("");
}

async function listLatestBackup(userId) {
  const { data: entries, error } = await supabase.storage.from(BUCKET).list(userId, {
    limit: 100,
    sortBy: { column: "name", order: "desc" }
  });
  if (error) throw error;
  const folders = (entries || [])
    .filter(item => item.name && /^backup-\d{4}-\d{2}-\d{2}T\d{2}-\d{2}-\d{2}-\d{3}Z$/.test(item.name))
    .sort((a, b) => b.name.localeCompare(a.name));
  for (const folder of folders) {
    const base = userId + "/" + folder.name;
    const { data, error: downloadError } = await supabase.storage.from(BUCKET).download(base + "/" + MANIFEST_NAME);
    if (downloadError) {
      const statusCode = String(downloadError.statusCode || "");
      if (statusCode === "404") continue; // Incomplete backup folder; try an older complete backup.
      throw downloadError;
    }
    if (!data) continue;
    try {
      const manifest = JSON.parse(await data.text());
      if (manifest && manifest.files && ((Array.isArray(manifest.files) && manifest.files.some(file => file && SAVE_NAME.test(file.name))) || (!Array.isArray(manifest.files) && Object.keys(manifest.files).some(name => SAVE_NAME.test(name))))) {
        return { base, manifest };
      }
    } catch (_) {}
  }
  return null;
}

async function restoreBackup(backup, expectedUserId) {
  const fs = getFS();
  if (!currentUser || currentUser.id !== expectedUserId) {
    throw new Error("A conta mudou durante a restauração");
  }
  if (!fs || typeof fs.writeFile !== "function" || typeof fs.readdir !== "function") {
    throw new Error("Sistema de arquivos do jogo indisponível");
  }

  const listed = Array.isArray(backup.manifest.files)
    ? backup.manifest.files.map(meta => [meta && meta.name, meta])
    : Object.entries(backup.manifest.files || {});
  const files = listed.filter(([name, meta]) =>
    typeof name === "string" &&
    (SAVE_NAME.test(name) || name === "global.sav") &&
    meta &&
    typeof meta.sha256 === "string"
  );
  if (!files.some(([name]) => SAVE_NAME.test(name))) {
    throw new Error("O backup não contém saves válidos");
  }

  // Never trust a path supplied by the manifest. All downloads stay inside
  // the selected user's backup folder and use a validated save filename.
  const downloaded = [];
  const seen = new Set();
  for (const [name, meta] of files) {
    if (seen.has(name)) throw new Error("O backup contém nomes de arquivo duplicados");
    seen.add(name);
    const objectPath = backup.base + "/" + name;
    const { data, error } = await supabase.storage.from(BUCKET).download(objectPath);
    if (error || !data) throw error || new Error("Arquivo ausente: " + name);
    const bytes = new Uint8Array(await data.arrayBuffer());
    if (meta.size != null && bytes.byteLength !== Number(meta.size)) {
      throw new Error("Tamanho divergente: " + name);
    }
    const hash = await sha256(bytes);
    if (hash !== meta.sha256) throw new Error("Integridade divergente: " + name);
    downloaded.push({ name, bytes });
  }

  if (!currentUser || currentUser.id !== expectedUserId) {
    throw new Error("A conta mudou durante a restauração");
  }

  // A restore is a replacement, not a merge: remove stale local save slots
  // that are absent from the cloud snapshot. Keep a full rollback snapshot.
  const isSaveFile = name => SAVE_NAME.test(name) || name === "global.sav";
  const previous = new Map();
  for (const name of fs.readdir(SAVE_DIR).filter(isSaveFile)) {
    previous.set(name, new Uint8Array(fs.readFile(SAVE_DIR + "/" + name)));
  }

  try {
    const incoming = new Set(downloaded.map(item => item.name));
    for (const name of previous.keys()) {
      if (!incoming.has(name)) fs.unlink(SAVE_DIR + "/" + name);
    }
    for (const item of downloaded) {
      fs.writeFile(SAVE_DIR + "/" + item.name, item.bytes);
    }
    await persistIdbfs();
    if (!currentUser || currentUser.id !== expectedUserId) {
      throw new Error("A conta mudou durante a restauração");
    }
  } catch (error) {
    try {
      for (const name of fs.readdir(SAVE_DIR).filter(isSaveFile)) {
        if (!previous.has(name)) fs.unlink(SAVE_DIR + "/" + name);
      }
      for (const [name, bytes] of previous) {
        fs.writeFile(SAVE_DIR + "/" + name, bytes);
      }
      await persistIdbfs();
    } catch (rollbackError) {
      console.error("[Cloud Save] Restore rollback failed:", rollbackError);
    }
    throw error;
  }
  lastFingerprint = "";
}

function hasLocalSaveFiles() {
  const fs = getFS();
  if (!fs || typeof fs.readdir !== "function") return false;
  try {
    return fs.readdir(SAVE_DIR).some(name => SAVE_NAME.test(name));
  } catch (_) {
    return false;
  }
}

async function readLocalSaves() {
  const fs = getFS();
  if (!fs || typeof fs.readdir !== "function") return [];
  const names = fs.readdir(SAVE_DIR).filter(name => SAVE_NAME.test(name) || name === "global.sav");
  const files = [];
  for (const name of names) {
    const bytes = new Uint8Array(fs.readFile(SAVE_DIR + "/" + name));
    files.push({ name, bytes, size: bytes.byteLength, sha256: await sha256(bytes) });
  }
  return files;
}

async function createCloudBackup() {
  if (!currentUser || startupState !== 1 || !getFS()) return;
  const files = await readLocalSaves();
  if (!files.some(file => SAVE_NAME.test(file.name))) return;
  const fingerprint = files.map(file => file.name + ":" + file.sha256).sort().join("|");
  if (fingerprint === lastFingerprint) return;

  const createdAt = new Date().toISOString();
  const folder = "backup-" + createdAt.replace(/[:.]/g, "-");
  const base = currentUser.id + "/" + folder;
  const manifest = {
    version: 1,
    backupId: folder,
    createdAt,
    files: {}
  };

  for (const file of files) {
    const path = base + "/" + file.name;
    const { error } = await supabase.storage.from(BUCKET).upload(path, new Blob([file.bytes], { type: "application/octet-stream" }), {
      contentType: "application/octet-stream",
      upsert: false
    });
    if (error) throw error;
    manifest.files[file.name] = {
      path,
      size: file.size,
      sha256: file.sha256
    };
  }

  const manifestPath = base + "/" + MANIFEST_NAME;
  const { error } = await supabase.storage.from(BUCKET).upload(
    manifestPath,
    new Blob([JSON.stringify(manifest, null, 2)], { type: "application/json" }),
    { contentType: "application/json", upsert: false }
  );
  if (error) throw error;
  lastFingerprint = fingerprint;
  setStatus("Backup na nuvem atualizado");
  console.info("[Cloud Save] Backup complete:", base);
}

function scheduleCloudBackup() {
  if (!currentUser || startupState !== 1) return;
  clearTimeout(backupTimer);
  backupTimer = setTimeout(async () => {
    try {
      await createCloudBackup();
    } catch (error) {
      console.error("[Cloud Save] Backup failed:", error);
      setStatus("Falha no backup: " + error.message);
    }
  }, 1800);
}

function persistIdbfs() {
  return new Promise((resolve, reject) => {
    const fs = getFS();
    if (!fs || typeof fs.syncfs !== "function") {
      reject(new Error("IDBFS indisponível"));
      return;
    }
    fs.syncfs(false, error => error ? reject(error) : resolve());
  });
}

function persistLocalFiles() {
  if (syncRunning) {
    syncQueued = true;
    return;
  }
  syncRunning = true;
  persistIdbfs()
    .then(() => scheduleCloudBackup())
    .catch(error => console.error("[Cloud Save] IndexedDB sync failed:", error))
    .finally(() => {
      syncRunning = false;
      if (syncQueued) {
        syncQueued = false;
        persistLocalFiles();
      }
    });
}

async function initializeForUser(sessionUser) {
  // Ignore duplicate INITIAL_SESSION/getSession notifications for the same user
  // without invalidating an in-flight lookup for that account.
  if (sessionUser && initializedUserId === sessionUser.id) return;
  const generation = ++authGeneration;

  if (!sessionUser) {
    currentUser = null;
    initializedUserId = null;
    const choice = document.getElementById("cr-cloud-choice");
    if (choice) choice.remove();
    if (!startupFinished) startupState = 1;
    setStatus("Não conectado — save local");
    return;
  }

  currentUser = sessionUser;
  initializedUserId = sessionUser.id;
  const previousChoice = document.getElementById("cr-cloud-choice");
  if (previousChoice) previousChoice.remove();

  if (startupFinished) {
    // The game may already contain another account's local save. Never upload
    // that data to a newly signed-in account; reload to run the restore choice.
    currentUser = null;
    setStatus("Conta conectada — recarregue para escolher o save da nuvem");
    return;
  }

  startupState = 0;
  setStatus("Verificando backup na nuvem...");
  try {
    const { data: verified, error } = await supabase.auth.getUser();
    if (generation !== authGeneration || !currentUser || currentUser.id !== sessionUser.id) return;
    if (error) throw error;
    if (!verified.user || verified.user.id !== sessionUser.id) throw new Error("Sessão não validada");

    const backup = await listLatestBackup(verified.user.id);
    if (generation !== authGeneration || !currentUser || currentUser.id !== sessionUser.id) return;
    if (backup) showRestoreChoice(backup);
    else if (hasLocalSaveFiles()) showNoBackupChoice(sessionUser.id);
    else {
      startupState = 1;
      setStatus("Conectado — nenhum backup anterior");
    }
  } catch (error) {
    if (generation !== authGeneration || !currentUser || currentUser.id !== sessionUser.id) return;
    console.error("[Cloud Save] Startup check failed:", error);
    currentUser = null; // Do not overwrite a possibly newer cloud backup after a failed check.
    startupState = 1;
    setStatus("Nuvem indisponível — usando save local");
  }
}

function handleAuthChange(session) {
  const user = session && session.user ? session.user : null;
  // Do not call Supabase methods inside onAuthStateChange's callback.
  setTimeout(() => initializeForUser(user), 0);
}

if (supabase) {
  supabase.auth.onAuthStateChange((_event, session) => handleAuthChange(session));
  supabase.auth.getSession().then(({ data, error }) => {
    if (error) {
      console.error("[Cloud Save] Session check failed:", error);
      if (!startupFinished) startupState = 1;
      return;
    }
    handleAuthChange(data.session);
  });
} else {
  startupState = 1;
}

window.ootCloudSaves = {
  startupStatus() {
    if (startupState === 1) startupFinished = true;
    return startupState;
  },
  persistLocalFiles
};
window.ootPersistIdbfs = persistLocalFiles;
