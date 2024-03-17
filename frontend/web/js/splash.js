const login_modal = new bootstrap.Modal('#login');

window.addEventListener('pywebviewready', () => {
    pywebview.api.open_login();
});


async function login() {
    const logged_in = await pywebview.api.login(document.getElementById('usr').value, document.getElementById('passwd').value);

    if (!logged_in) {
        document.getElementById('failed_login_alert').classList.remove('d-none');
    }
}

