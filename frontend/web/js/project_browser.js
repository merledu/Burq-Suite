async function get_proj_tree() {
    const tree_map = await pywebview.api.get_proj_tree(),
        create_dir_node = (current_node, path) => {
            current_node.append(document.createElement('li'));

            current_node = current_node.lastElementChild;
            current_node.append(document.createElement('span'));

            current_node = current_node.lastElementChild;
            current_node.classList.add('caret');
            current_node.innerHTML = path[path.length-1];
            current_node.after(document.createElement('ul'));

            current_node = current_node.nextElementSibling;
            current_node.classList.add('nested');
            current_node.previousElementSibling.addEventListener('click', () => {
                current_node.classList.toggle('active');
                current_node.previousElementSibling.classList.toggle('caret-down');
            });

            return current_node;
        },
        create_file_node = (current_node, file_list) => {
            for (let file of file_list) {
                current_node.append(document.createElement('li'));

                current_node = current_node.lastElementChild;
                current_node.innerHTML = file;

                current_node = current_node.parentElement;
            }
            return current_node;
        };
    let current_node = document.getElementById('proj_tree'),
        root_path_len = tree_map[0]['path'].split('/').length - 1,
        lvl = 0,
        path = [];

    for (let i = 0; i < tree_map.length; ++i) {
        path = tree_map[i]['path'].split('/');
        let path_len = (path.length - 1) % root_path_len;

        if (lvl > path_len) {
            let backtrack_ndx = i - 1;
            while (lvl > path_len) {
                current_node = create_file_node(current_node, tree_map[backtrack_ndx]['files']);
                for (let j = 0; j < 2; ++j) {
                    current_node = current_node.parentElement;
                }
                --lvl;
            }
        }
        current_node = create_dir_node(current_node, path);
        ++lvl;
    }
    let tree_last_ndx = tree_map.length - 1;
    while (tree_map.length) {
        current_node = create_file_node(current_node, tree_map[tree_last_ndx]['files']);
        for (let j = 0; j < 2; ++j) {
            current_node = current_node.parentElement;
        }
        path.pop();
        let backtrack_path = path.join('/');
        while (tree_map.length && backtrack_path !== tree_map[tree_last_ndx]['path']) {
            tree_map.pop();
            tree_last_ndx = tree_map.length - 1;
        }
    }
}


async function init_window() {
    document.getElementById('proj_name').innerHTML = await pywebview.api.get_proj_name();
    get_proj_tree();
}


window.addEventListener('pywebviewready', () => {
    init_window();
});

