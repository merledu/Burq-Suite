async function login() {
    const login_status = await pywebview.api.login(
        document.getElementById('usr').value,
        document.getElementById('passwd').value
    );

    if (!login_status['access']) {
        document.getElementById('failed_login_alert').style.display = 'block';
    }
}
