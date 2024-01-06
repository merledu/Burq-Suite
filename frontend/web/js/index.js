async function open_folder_dialog() {
    const dir = await pywebview.api.select_proj_folder();

    document.getElementById('dir').value = dir['dir_path'];
}


function open_configs(dut_type) {
    const proj_dir = document.getElementById('dir');
    const missing_proj_dir_modal = new bootstrap.Modal('#missing_proj_dir');

    if (proj_dir.value) {
        pywebview.api.open_dut_configs(dut_type);
    } else {
        missing_proj_dir_modal.toggle();
    }
}
