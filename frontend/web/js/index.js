window.addEventListener('pywebviewready', () => {
    document.getElementById('body').classList.remove('d-none');
});


function open_new_proj(dut_type) {
    pywebview.api.open_new_proj(dut_type);
}


async function select_proj_folder() {
    document.getElementById('dir').value = await pywebview.api.select_proj_folder();
}


async function open_proj() {
    const proj_folder = document.getElementById('dir').value,
        proj_select_modal = new bootstrap.Modal('#proj_select_modal');

    if (proj_folder) {
        const project_selected = await pywebview.api.open_proj(proj_folder);
        if (!project_selected) {
            proj_select_modal.toggle();
        }
    } else {
        proj_select_modal.toggle();
    }
}

