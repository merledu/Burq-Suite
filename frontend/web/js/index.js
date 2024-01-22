async function open_folder_dialog() {
    document.getElementById('dir').value = await pywebview.api.select_proj_folder();
}


function open_configs(dut_type) {
    const proj_dir = document.getElementById('dir').value;
    const missing_proj_dir_modal = new bootstrap.Modal('#missing_proj_dir');

    if (proj_dir) {
        pywebview.api.open_dut_configs(dut_type);
    } else {
        missing_proj_dir_modal.toggle();
    }
}
