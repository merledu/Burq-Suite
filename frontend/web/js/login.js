async function login() {
    const logged_in = await pywebview.api.login(
        document.getElementById('usr').value,
        document.getElementById('passwd').value
    );

    if (!logged_in) {
        document.getElementById('failed_login_alert').style.display = 'block';
    }
}
