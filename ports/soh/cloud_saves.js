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
    panel.innerHTML = '<div style="width:min(440px,calc(100% - 32px));padding:24px;border:1px solid #526071;border-radius:12px;background:#111923;box-shadow:0 16px 60px #000"><h2 style="margin:0 0 10px;font-size:20px">Backup encontrado</h2><p data-cloud-message style="margin:0 0 18px;color:#c4ced9">Existe um save na nuvem. Como deseja iniciar?</p><div style="display:flex;gap:10px;flex-wrap:wrap"><button data-cloud-restore style="padding:10px 14px;border:0;border-radius:6px;background:#238636;color:white;cursor:pointer">Restaurar da nuvem</button><button data-cloud-local style="padding:10px 14px;border:1px solid #64748b;border-radius:6px;background:#26313d;color:white;cursor:pointer">Continuar com save local</button></div></div>';
    document.body.appendChild(panel);
  }
  const message = panel.querySelector("[data-cloud-message]");
  const restore = panel.querySelector("[data-cloud-restore]");
  const local = panel.querySelector("[data-cloud-local]");
  message.textContent = "Backup de " + new Date(backup.createdAt || Date.now()).toLocaleString() + ". Escolha qual progresso deseja usar.";
  restore.disabled = false;
  local.disabled = false;
  restore.onclick = async () => {
    restore.disabled = true;
    local.disabled = true;
    message.textContent = "Baixando e verificando os arquivos...";
    try {
      await restoreBackup(backup);
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
    .filter(item => item.name && item.name.startsWith("backup-"))
    .sort((a, b) => b.name.localeCompare(a.name));
  for (const folder of folders) {
    const base = userId + "/" + folder.name;
    const { data, error: downloadError } = await supabase.storage.from(BUCKET).download(base + "/" + MANIFEST_NAME);
    if (downloadError || !data) continue;
    try {
      const manifest = JSON.parse(await data.text());
      if (manifest && manifest.files && ((Array.isArray(manifest.files) && manifest.files.some(file => file && SAVE_NAME.test(file.name))) || (!Array.isArray(manifest.files) && Object.keys(manifest.files).some(name => SAVE_NAME.test(name))))) {
        return { base, manifest };
      }
    } catch (_) {}
  }
  return null;
}

async function restoreBackup(backup) {
  const fs = getFS();
  if (!fs || typeof fs.writeFile !== "function") throw new Error("Sistema de arquivos do jogo indisponível");
  const listed = Array.isArray(backup.manifest.files)
    ? backup.manifest.files.map(meta => [meta.name, meta])
    : Object.entries(backup.manifest.files);
  const files = listed
    .filter(([name, meta]) => SAVE_NAME.test(name) || name === "global.sav")
    .filter(([, meta]) => meta && typeof meta.sha256 === "string");
  if (!files.length) throw new Error("O backup não contém saves válidos");

  const downloaded = [];
  for (const [name, meta] of files) {
    const objectPath = meta.path || (backup.base + "/" + name);
    const { data, error } = await supabase.storage.from(BUCKET).download(objectPath);
    if (error || !data) throw error || new Error("Arquivo ausente: " + name);
    const bytes = new Uint8Array(await data.arrayBuffer());
    if (meta.size != null && bytes.byteLength !== Number(meta.size)) throw new Error("Tamanho divergente: " + name);
    const hash = await sha256(bytes);
    if (hash !== meta.sha256) throw new Error("Integridade divergente: " + name);
    downloaded.push({ name, bytes });
  }

  const previous = [];
  try {
    for (const item of downloaded) {
      const path = SAVE_DIR + "/" + item.name;
      let existed = false;
      let oldBytes = null;
      try {
        oldBytes = fs.readFile(path);
        existed = true;
      } catch (_) {}
      previous.push({ path, existed, oldBytes });
      fs.writeFile(path, item.bytes);
    }
    await persistIdbfs();
  } catch (error) {
    for (const item of previous.reverse()) {
      try {
        if (item.existed) fs.writeFile(item.path, item.oldBytes);
        else fs.unlink(item.path);
      } catch (_) {}
    }
    throw error;
  }
  lastFingerprint = "";
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
    const { error } = await supabase.storage.from(BUCKET).upload(path, file.bytes, {
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
  if (!sessionUser) {
    currentUser = null;
    initializedUserId = null;
    if (!startupFinished) startupState = 1;
    setStatus("Não conectado — save local");
    return;
  }
  if (initializedUserId === sessionUser.id) return;
  currentUser = sessionUser;
  initializedUserId = sessionUser.id;

  if (startupFinished) {
    startupState = 1;
    setStatus("Conectado — backup automático ativo");
    return;
  }

  startupState = 0;
  setStatus("Verificando backup na nuvem...");
  try {
    const { data: verified, error } = await supabase.auth.getUser();
    if (error) throw error;
    if (!verified.user || verified.user.id !== sessionUser.id) throw new Error("Sessão não validada");
    const backup = await listLatestBackup(verified.user.id);
    if (backup) showRestoreChoice(backup);
    else {
      startupState = 1;
      setStatus("Conectado — nenhum backup anterior");
    }
  } catch (error) {
    console.error("[Cloud Save] Startup check failed:", error);
    startupState = 1; // Cloud unavailable: keep the local save and allow offline play.
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
