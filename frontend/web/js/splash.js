//const login_modal = new bootstrap.Modal('#login')

window.addEventListener('pywebviewready', async () => {
    pywebview.api.open_login()
})

// SoC-Now is not up yet, therefore skip login
//async function login() {
//    const logged_in = await pywebview.api.login(
//        document.getElementById('usr').value,
//        document.getElementById('passwd').value
//    )
//    if (!logged_in) {
//        document.getElementById('failed_login_alert').classList.remove('d-none')
//    }
//}
