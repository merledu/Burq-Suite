async function init_window() {
    document.getElementById('dut_name').append(await pywebview.api.get_dut_name);
    document.getElementById('iss_name').append(await pywebview.api.get_iss);
}


window.addEventListener('pywebviewready', () => {
    init_window();
});

