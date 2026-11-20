import { createClient } from "https://esm.sh/@supabase/supabase-js@2.119.0";

const SUPABASE_URL = "https://mjfbsrypuyvawlhdfutw.supabase.co";
const SUPABASE_PUBLISHABLE_KEY = "sb_publishable_dkCpYsy88ZrkF12D7fhmMQ__f7HfU5w";

const supabase = createClient(SUPABASE_URL, SUPABASE_PUBLISHABLE_KEY, {
  auth: {
    persistSession: true,
    autoRefreshToken: true,
    detectSessionInUrl: true
  }
});

// Expose only the initialized public client for the future save-sync module.
window.ootSupabase = supabase;
window.dispatchEvent(new Event("oot-supabase-ready"));

const root = document.getElementById("cr-auth");
if (root) {
  const status = root.querySelector("[data-auth-status]");
  const login = root.querySelector("[data-auth-login]");
  const logout = root.querySelector("[data-auth-logout]");

  function showSignedOut(message) {
    status.textContent = message || "Não conectado";
    login.hidden = false;
    logout.hidden = true;
  }

  function showSignedIn(user) {
    const label = user.user_metadata?.user_name ||
      user.user_metadata?.preferred_username ||
      user.email ||
      "Conta GitHub conectada";
    status.textContent = "Conectado: " + label;
    login.hidden = true;
    logout.hidden = false;
  }

  login.addEventListener("click", async () => {
    login.disabled = true;
    status.textContent = "Abrindo GitHub...";
    const redirectTo = location.origin + location.pathname + location.search;
    try {
      const { error } = await supabase.auth.signInWithOAuth({
        provider: "github",
        options: { redirectTo }
      });
      if (error) throw error;
    } catch (error) {
      showSignedOut("Falha no login: " + error.message);
      login.disabled = false;
    }
  });

  logout.addEventListener("click", async () => {
    logout.disabled = true;
    try {
      const { error } = await supabase.auth.signOut();
      if (error) throw error;
    } catch (error) {
      status.textContent = "Erro ao sair: " + error.message;
    } finally {
      logout.disabled = false;
    }
  });

  supabase.auth.onAuthStateChange((_event, session) => {
    if (session?.user) showSignedIn(session.user);
    else showSignedOut();
  });

  supabase.auth.getSession().then(({ data, error }) => {
    if (error) showSignedOut("Erro ao verificar sessão: " + error.message);
    else if (data.session?.user) showSignedIn(data.session.user);
    else showSignedOut();
  });
}
