async function select_new_proj() {
    const new_proj_path = document.getElementById('new_proj'),
          create_btn = document.getElementById('create_btn');

    new_proj_path.value = await pywebview.api.select_new_proj();
    if (new_proj_path.value) {
        create_btn.disabled = false;
    } else {
        if (!create_btn.disabled) {
            create_btn.disabled = true;
        }
    }
}


function cancel_new_proj() {
    pywebview.api.cancel_new_proj();
}


function create_new_proj() {
    pywebview.api.create_new_proj();
}

