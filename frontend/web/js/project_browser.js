const current_file = {
    path: '',
    node: null
}, current_dir = {
    path: '',
    node: null
}, myCodeMirror = CodeMirror.fromTextArea(
    document.getElementById("editor_textarea"), {
        mode: "text/x-csrc",
        theme: "cobalt",
        indentUnit: 4,
        lineNumbers: true,
        spellcheck: false
    }
), new_file_modal = new bootstrap.Modal('#new_file_modal')
    new_dir_modal = new bootstrap.Modal('#new_dir_modal'),
    invalid_save_modal = new bootstrap.Modal('#invalid_save_modal');
myCodeMirror.setSize(null, '100%');

function return_to_index() {
    pywebview.api.return_to_index();
}

function save_file() {
    if (current_file.node) {
        pywebview.api.save_file(
            current_file.path,
            myCodeMirror.getValue()
        );
    } else {
        
    }
}

async function create_dir() {
    pywebview.api.create_dir(
        current_dir.path.concat(
            '/',
            document.getElementById('new_dir').value
        )
    );
    current_dir.node.lastElementChild.remove();
    await expand_dir(current_dir.node, current_dir.path);
    if (current_dir.node.children.length === 1) {
        current_dir.node.children[0].classList.toggle('nested');
    }
}

async function create_file() {
    pywebview.api.create_file(
        current_dir.path.concat(
            '/',
            document.getElementById('new_file').value
        )
    );
    current_dir.node.lastElementChild.remove();
    await expand_dir(current_dir.node, current_dir.path);
    if (current_dir.node.children.length === 1) {
        current_dir.node.children[0].classList.toggle('nested');
    }
}

async function get_file_content() {
    myCodeMirror.setValue(
        await pywebview.api.get_file_content(
            current_file.path
        )
    );
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
    folder_node.classList.add('folder_node', 'nested', 'ps-3');
    dir_node.appendChild(folder_node);
    for (let node_path of dir_struct.dirnames) {
        const li_node = document.createElement('li'),
            span_node = document.createElement('span');
        li_node.id = node_path;
        span_node.className = 'dir';
        span_node.innerHTML = node_path.split('/').pop();
        span_node.onclick = () => {
            toggle_dir(li_node);
            current_dir.path = node_path;
            current_dir.node = li_node;
        }
        li_node.appendChild(span_node);
        folder_node.appendChild(li_node);
    }
    for (let node_path of dir_struct.filenames) {
        const li_node = document.createElement('li'),
            span_node = document.createElement('span');
        li_node.id = node_path;
        li_node.classList.add('ps-3');
        span_node.className = 'file';
        span_node.innerHTML = node_path.split('/').pop();
        span_node.onclick = () => {
            current_file.path = node_path;
            current_file.node = li_node;
            const node_path_array = node_path.split('/');
            current_dir.path = node_path_array.slice(
                0,
                node_path_array.length - 1
            ).join('/');
            current_dir.node = dir_node;
            get_file_content();
        }
        li_node.appendChild(span_node);
        folder_node.appendChild(li_node);
    }
}

async function init_window() {
    current_dir.path = await pywebview.api.get_proj_path();
    document.getElementById('proj_name').innerHTML = await pywebview.api.get_proj_name();
    const file_tree_div = document.getElementById('file_tree');
    current_dir.node = file_tree_div;
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
