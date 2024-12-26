const new_proj_modal = new bootstrap.Modal('#new_proj_modal');

window.addEventListener('pywebviewready', () => {
    document.getElementById('body').classList.remove('d-none');
});

function open_new_proj(dut_type) {
    pywebview.api.open_new_proj(dut_type);
}

function create_new_proj() {
    const new_proj_path = document.getElementById('new_proj').value;
    if (new_proj_path) {
        pywebview.api.create_new_proj(new_proj_path);
    }
}

async function select_proj_folder(id) {
    const proj_folder = await pywebview.api.select_proj_folder();
    if (proj_folder) {
        document.getElementById(id).value = proj_folder;
    }
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
