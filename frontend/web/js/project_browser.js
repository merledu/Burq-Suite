let current_file = '';
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

function save_file() {
    if (current_file) {
        pywebview.api.save_file(
            current_file,
            myCodeMirror.getValue()
        );
    } else {

    }
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
    for (let node_path of dir_struct.dirnames) {
        const li_node = document.createElement('li'),
            span_node = document.createElement('span');
        li_node.id = node_path;
        span_node.className = 'dir';
        span_node.innerHTML = node_path.split('/').pop();
        span_node.onclick = () => {
            toggle_dir(li_node);
        }
        li_node.appendChild(span_node);
        folder_node.appendChild(li_node);
    }
    for (let node_path of dir_struct.filenames) {
        const li_node = document.createElement('li'),
            span_node = document.createElement('span');
        li_node.id = node_path;
        span_node.className = 'file';
        span_node.innerHTML = node_path.split('/').pop();
        span_node.onclick = () => {
            current_file = node_path;
        }
        li_node.appendChild(span_node);
        folder_node.appendChild(li_node);
    }
}

async function init_window() {
    document.getElementById('proj_name').innerHTML = await pywebview.api.get_proj_name();
    const file_tree_div = document.getElementById('file_tree');
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
