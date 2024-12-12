async function log_stderr() {
    document.querySelector('p').innerHTML = await pywebview.api.get_stderr()
}
window.addEventListener('pywebviewready', () => {
    log_stderr();
})
