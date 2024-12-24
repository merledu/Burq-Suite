const core_cfg_modal = new bootstrap.Modal('#cfg');
const empty_fields_modal = new bootstrap.Modal('#empty_fields');

async function init_window() {
    const dut_type = await pywebview.api.get_dut_type(),
        dut_type_div = document.getElementById(dut_type);
    dut_type_div.classList.add('rounded-pill');
    switch (dut_type) {
        case 'custom':
            dut_type_div.style.backgroundColor = '#A851FF';
            document.getElementById('custom_dut_configs').classList.remove('d-none');
            // document.getElementById('results').classList.remove('d-none');
            break;
        case 'prebuilt':
            dut_type_div.style.backgroundColor = '#0CA17E';
            break;
        case 'soc-now':
            dut_type_div.style.backgroundColor = '#436EEE';
            break;
    }
}

window.addEventListener('pywebviewready', () => {
    init_window();
})

function open_dut_menu() {
    pywebview.api.open_dut_menu();
}

async function get_dir(input_id, root='') {
    const dir = await pywebview.api.get_dir(root);
    if (dir) {
        document.getElementById(input_id).value = dir;
    }
}

// CUSTOM DUT CONFIGS START
function select_extension() {
    const extensions = [],
        exts = document.getElementsByName('core_ext');
    for (let ext of exts) {
        if (ext.checked) {
            extensions.push(ext.value);
        }
    }
    return extensions.join('');
}

function select_variant() {
    const variants = document.getElementsByName('core_variant');
    for (let v of variants) {
        if (v.checked) {
            return v.value;
        }
    }
}
 
function set_csv_file() {
    pywebview.api.set_csv_file(
        document.getElementById('csv_dir').value,
        document.getElementById('csv_file').value
    );
}
// CUSTOM DUT CONFIGS END

// TEST CONFIGS START
async function get_self_checking_tests_category() {
    const verif_fw = document.getElementById('verif_fw'),
        self_checking_category_list = await pywebview.api.get_self_checking_tests_category();
    for (let category of self_checking_category_list) {
        let category_opt = document.createElement('option');
        category_opt.value = category;
        category_opt.innerHTML = category;
        verif_fw.append(category_opt);
    }    
}

async function toggle_testcases(verif_fw) {
    const testcases = document.getElementById('testcases');
    let testcase_list = [],
        default_option = document.createElement('option');
    default_option.disabled = true;
    default_option.value = '';
    default_option.innerHTML = '--- Select testcase ---';
    testcases.replaceChildren(default_option);
    const selectedVerificationFramework = document.getElementById('verif_fw').value;
    switch (verif_fw) {
        case 'riscv-dv':
            testcase_list = await pywebview.api.get_working_base_testlist();
            break;
        case 'riscv-arch-test':
            break;
        case selectedVerificationFramework:
            testcase_list = await pywebview.api.get_self_checking_testcases(selectedVerificationFramework);
            break;
    }
    for (let testcase of testcase_list) {
        let testcase_opt = document.createElement('option');
        testcase_opt.value = testcase;
        testcase_opt.innerHTML = testcase.replace(/_/g, ' ');
        testcases.append(testcase_opt);
    }
}

function clear_testlist() {
    pywebview.api.clear_testlist();
    document.getElementById('testlist').replaceChildren();
}

function remove_test(btn) {
    const item_div = btn.parentElement.parentElement;
    pywebview.api.remove_test([...item_div.parentElement.children].indexOf(item_div));
    item_div.remove();
}

function add_test() {
    const testlist = document.getElementById('testlist'),
        item_div = document.createElement('div'),
        testname_div = document.createElement('div'),
        btn_div = document.createElement('div'),
        remove_btn = document.createElement('button'),
        btn_icon = document.createElement('i'),
        classes = new Map([
            [item_div, [
                'd-flex',
                'flex-row',
                'p-2',
                'border-bottom',
                'border-secondary'
            ]],
            [testname_div, [
                'flex-grow-1',
                'overflow-x-hidden',
                'text-white',
                'fw-semibold',
                'd-flex',
                'align-items-center'
            ]],
            [btn_div, ['d-flex', 'align-items-center', 'ms-3']],
            [remove_btn, ['btn', 'btn-danger']],
            [btn_icon, ['bi-dash']]
        ]),
        testcase = document.getElementById('testcases'),
        verif_fw = document.getElementById('verif_fw').value;
    for (let elem of classes) {
        for (let bs_class of elem[1]) {
            elem[0].classList.add(bs_class);
        }
    }
    testname_div.innerHTML = testcase.options[testcase.selectedIndex].innerHTML;
    remove_btn.setAttribute('onclick', 'remove_test(this)');
    remove_btn.append(btn_icon);
    btn_div.append(remove_btn);
    for (let elem of [testname_div, btn_div]) {
        item_div.append(elem);
    }
    pywebview.api.add_test(verif_fw, testcase.value);
    testlist.append(item_div);
}
// TEST CONFIGS END

// ZAP PROGRESS START
function update_progress_bar(progress) {
    document.getElementById('progress_bar').style.width = `${progress}%`;
}

function update_progress_label(msg) {
    document.getElementById('progress_label').innerHTML = msg;
}
// ZAP PROGRESS END

// TEST RESULTS START
async function create_results() {
    const test_status_list = await pywebview.api.get_test_status_list(),
        results = document.getElementById('result_table');
    for (let test of test_status_list) {
        let test_name_div = document.createElement('div'),
            test_status_div = document.createElement('div'),
            verif_fw_div = document.createElement('div'),
            row = document.createElement('div'),
            classes = new Map([
                [test_name_div, [
                    'p-2',
                    'overflow-x-auto',
                    'text-white',
                    'border-end',
                    'border-secondary'
                ]],
                [test_status_div, ['p-2', 'overflow-x-auto', 'text-white']],
                [row, ['d-flex', 'flex-row', 'border-bottom', 'border-secondary']],
                [verif_fw_div, ['text-white', 'border-end', 'border-secondary', 'p-2', 'overflow-x-auto']]
            ]);
        for (let elem of classes) {
            for (let bs_class of elem[1]) {
                elem[0].classList.add(bs_class);
            }
        }
        for (let [index, elem] of [verif_fw_div, test_name_div, test_status_div].entries()) {
            elem.innerHTML = test[index];
            elem.style.width = '237px';
            row.append(elem);
        }
        results.append(row);
    }
}
// TEST RESULTS END

// NAVIGATION START
async function validate_dut_fields() {
    switch (await pywebview.api.get_dut_type()) {
        case 'custom':
            return [
                'dut',
                'dut_disasm',
                'dut_cmd',
                'csv_dir',
                'csv_file'
            ].map(
                id => document.getElementById(id).value
            ).reduce(
                (a, b) => a && b
            )
    }
}

function validate_testlist() {
    return document.getElementById('testlist').childElementCount;
}

function toggle_elements(hide, show) {
    for (let id of hide) {
        document.getElementById(id).classList.add('d-none');
    }
    for (let id of show) {
        document.getElementById(id).classList.remove('d-none');
    }
}

async function get_core_cfgs() {
    const cfgs = await pywebview.api.get_core_cfgs(),
        load_cfg_select = document.getElementById('load_cfg_select');
    load_cfg_select.replaceChildren(load_cfg_select.firstElementChild);
    for (let cfg of cfgs) {
        let cfg_option = document.createElement('option');
        cfg_option.value = cfg;
        cfg_option.innerHTML = cfg;
        load_cfg_select.append(cfg_option);
    }
}

function open_core_cfg() {
    get_core_cfgs();
    core_cfg_modal.toggle();
}

async function save_core_cfg() {
    const cfg_name = document.getElementById('save_cfg').value;
    if (await validate_dut_fields()) {
        if (cfg_name) {
            let cfgs = {
                ...[
                    'dut',
                    'dut_disasm',
                    'dut_cmd',
                    'csv_dir',
                    'csv_file'
                ].reduce((obj, id) => {
                    obj[id] = document.getElementById(id).value;
                    return obj;
                }, {}),
                'extension': select_extension(),
                'variant': select_variant()
            };
            pywebview.api.save_core_cfg(cfg_name, cfgs);
        }
    } else {
        empty_fields_modal.toggle();
    }
}

async function load_core_cfg() {
    const cfg_name = document.getElementById('load_cfg_select').value,
        ext_array = document.getElementsByName('core_ext'),
        variant_array = document.getElementsByName('core_variant');
    if (cfg_name) {
        const cfg = await pywebview.api.load_core_cfg(cfg_name);
        [
            'dut',
            'dut_disasm',
            'dut_cmd',
            'csv_dir',
            'csv_file'
        ].forEach(
            id => document.getElementById(id).value = cfg[id]
        );
        for (let ext of ext_array) {
            if (cfg['extension'].includes(ext.value)) {
                if (!ext.checked) {
                    ext.checked = true;
                }
            } else if (ext.checked) {
                ext.checked = false;
            }
        }
        for (let variant of variant_array) {
            if (cfg['variant'] === variant.value) {
                variant.checked = true;
                break;
            }
        }
    }
}

async function open_test_configs() {
    const hide = ['right_btn', 'core_cfg'],
        show = ['test_configs', 'left_btn', 'zap_btn'];
    if (await validate_dut_fields()) {
        switch (await pywebview.api.get_dut_type()) {
            case 'custom':
                document.getElementById('custom_dut_configs').classList.add('d-none');
                break;
        }
        get_self_checking_tests_category();
        toggle_elements(hide, show);
    } else {
        empty_fields_modal.toggle();
    }
}

async function open_dut_configs() {
    const hide = ['test_configs', 'left_btn', 'zap_btn'],
        show = ['right_btn', 'core_cfg'],
        verif_fw = document.getElementById('verif_fw');
    verif_fw.replaceChildren(...[...verif_fw.children].slice(0, 3));
    switch (await pywebview.api.get_dut_type()) {
        case 'custom':
            document.getElementById('custom_dut_configs').classList.remove('d-none');
            break;
    }
    toggle_elements(hide, show);
}

function zap_progress() {
    const hide = ['test_configs', 'left_btn', 'zap_btn'],
        show = ['test_zap'];
    toggle_elements(hide, show);
}

async function zap_testlist() {
    const empty_test_modal = new bootstrap.Modal('#empty_test');
    if (validate_testlist()) {
        switch (await pywebview.api.get_dut_type()) {
            case 'custom':
                const config_list = [
                    // Pattern: [config_key, input_tag_id, log_info_msg]
                    ['dut_path', 'dut', 'Uploaded DUT: '],
                    ['dut_disasm_path', 'dut_disasm', 'DUT disassembly dump directory: '],
                    ['dut_cmd', 'dut_cmd', 'DUT command: ']
                ];
                for (let config of config_list) {
                    let input_value = document.getElementById(config[1]).value;
                    pywebview.api.set_config(config[0], input_value, config[2] + input_value);
                }
                pywebview.api.select_extension(select_extension());
                pywebview.api.select_variant(select_variant());
                set_csv_file();
                break;
        }
        zap_progress();
        pywebview.api.zap_testlist();
    } else {
        empty_test_modal.toggle();
    }
}

function return_verif_fw() {
    const verif_fw = document.getElementById('verif_fw');
    return verif_fw.value;
}

function return_testcases() {
    const testcases = document.getElementById('testcases');
    return testcases.value;
}

function open_results() {
    const hide = ['test_zap'],
        show = ['results', 'proj_browser_btn'];
    toggle_elements(hide, show);
}

function open_proj_browser() {
    pywebview.api.open_proj_browser();
}
// NAVIGATION END
