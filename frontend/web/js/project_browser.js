const myCodeMirror = CodeMirror.fromTextArea(
    document.getElementById("editor_textarea"), {
        mode: "text/x-csrc",
        theme: "cobalt",
        indentUnit: 4,
        lineNumbers: true,
        spellcheck: false
    }
);

function return_to_index() {
    pywebview.api.return_to_index();
}

async function toggle_dir(dir_node) {
    if (dir_node.children.length === 1) {
        await expand_dir(dir_node, dir_node.id);
    }
    dir_node.children[1].classList.toggle('active');
    dir_node.children[0].classList.toggle('caret-down');
}

async function expand_dir(dir_node, path) {
    const dir_struct = await pywebview.api.retrieve_dir_contents(path),
        folder_node = document.createElement('ul');
    folder_node.classList.add('folder_node', 'nested');
    dir_node.appendChild(folder_node);
    for (let node of dir_struct.dirnames) {
        const li_node = document.createElement('li'),
            span_node = document.createElement('span');
        li_node.id = node;
        span_node.className = 'dir';
        span_node.innerHTML = node.split('/').pop();
        span_node.setAttribute('onclick', `await toggle_dir(${li_node})`);
        li_node.appendChild(span_node);
        folder_node.appendChild(li_node);
    }
    for (let node of dir_struct.filenames) {
        const li_node = document.createElement('li'),
            span_node = document.createElement('span');
        li_node.id = node;
        span_node.className = 'file';
        span_node.innerHTML = node.split('/').pop();
        li_node.appendChild(span_node);
        folder_node.appendChild(li_node);
    }
}

async function init_window() {
    document.getElementById('proj_name').innerHTML = await pywebview.api.get_proj_name();
    const file_tree_div = document.getElementById('proj_tree');
    await expand_dir(
        file_tree_div,
        await pywebview.api.get_proj_path()
    );
    if (file_tree_div.children.length === 1) {
        file_tree_div.children[0].classList.toggle('nested');
    }
}

window.addEventListener('pywebviewready', () => {
    init_window();
});
