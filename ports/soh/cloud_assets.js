const BUCKET = "game-assets";

let preparePromise = null;

function setAssetsStatus(message) {
  const node = document.querySelector("[data-assets-status]");
  if (node) node.textContent = message;
}

function isMissingObject(error) {
  const status = String(error && (error.statusCode || error.status) || "");
  const message = String(error && error.message || "").toLowerCase();
  return status === "404" || message.includes("not found") || message.includes("object does not exist");
}

async function getVerifiedUser(supabase) {
  const { data: sessionData, error: sessionError } = await supabase.auth.getSession();
  if (sessionError) throw sessionError;

  const sessionUser = sessionData && sessionData.session && sessionData.session.user;
  if (!sessionUser) return null;

  const { data, error } = await supabase.auth.getUser();
  if (error) throw error;
  if (!data || !data.user || data.user.id !== sessionUser.id) {
    throw new Error("A sessão do Supabase não pôde ser validada.");
  }
  return data.user;
}

async function hasCachedOotArchive() {
  if (typeof window.listCachedFiles !== "function") {
    throw new Error("Cache local de recursos indisponível.");
  }
  const keys = await window.listCachedFiles();
  return keys.some(key => key === "oot.o2r" || key === "oot-mq.o2r");
}

async function downloadUserArchive(supabase, userId) {
  const storage = supabase.storage.from(BUCKET);

  for (const name of ["oot.o2r", "oot-mq.o2r"]) {
    const { data, error } = await storage.download(userId + "/" + name);
    if (error) {
      if (isMissingObject(error)) continue;
      throw error;
    }
    if (!data || typeof data.arrayBuffer !== "function" || data.size === 0) {
      throw new Error("O arquivo " + name + " está vazio ou inválido.");
    }
    return { name, blob: data };
  }

  return null;
}

async function prepareCloudAssets() {
  if (await hasCachedOotArchive()) {
    setAssetsStatus("Recursos já disponíveis neste dispositivo");
    return false;
  }

  const supabase = window.ootSupabase;
  if (!supabase) {
    setAssetsStatus("Entre com GitHub para baixar os recursos da nuvem");
    return false;
  }

  const user = await getVerifiedUser(supabase);
  if (!user) {
    setAssetsStatus("Entre com GitHub para baixar os recursos da nuvem");
    return false;
  }

  if (typeof window.cacheFile !== "function" || typeof window.writeOtrToFS !== "function") {
    throw new Error("Funções de cache do jogo indisponíveis.");
  }

  setAssetsStatus("Baixando recursos privados da nuvem...");
  const archive = await downloadUserArchive(supabase, user.id);
  if (!archive) {
    setAssetsStatus("Recursos não encontrados na nuvem — selecione sua ROM");
    return false;
  }

  const buffer = await archive.blob.arrayBuffer();

  // Revalidate the account after the download so a session switch cannot
  // associate one user's private archive with another user's active session.
  const { data: verifiedAgain, error: verifyError } = await supabase.auth.getUser();
  if (verifyError) throw verifyError;
  if (!verifiedAgain || !verifiedAgain.user || verifiedAgain.user.id !== user.id) {
    throw new Error("A conta mudou durante o download dos recursos.");
  }

  await window.cacheFile(archive.name, buffer.slice(0));
  const written = window.writeOtrToFS(archive.name, buffer);
  if (!written) {
    // The archive is safely cached; checkCachedOtr() will retry the FS write.
    console.warn("[Cloud Assets] Immediate filesystem write failed; cached copy will be retried.");
  }

  setAssetsStatus("Recursos da nuvem carregados");
  console.info("[Cloud Assets] Loaded", archive.name, buffer.byteLength, "bytes");
  return true;
}

function prepare() {
  if (!preparePromise) {
    preparePromise = prepareCloudAssets().catch(error => {
      console.error("[Cloud Assets] Download failed:", error);
      setAssetsStatus("Falha ao baixar recursos — você ainda pode selecionar sua ROM");
      return false;
    });
  }
  return preparePromise;
}

window.ootCloudAssets = { prepare };

// The runtime may finish initializing before module scripts at the bottom of
// the page execute. Resolve the startup gate once this module is available.
if (typeof window._resolveOotCloudAssetsModule === "function") {
  window._resolveOotCloudAssetsModule();
}
