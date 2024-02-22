async function init_window() {
    const dut_type = await pywebview.api.get_dut_type();
    const dut_type_div = document.getElementById(dut_type);

    dut_type_div.classList.add('rounded-pill');
    switch (dut_type) {
        case 'custom':
            dut_type_div.style.backgroundColor = '#A851FF';
            document.getElementById('custom_dut_configs').classList.remove('d-none');
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
});


function open_dut_menu() {
    pywebview.api.open_dut_menu();
}


async function get_dir(input_id, root='') {
    document.getElementById(input_id).value = await pywebview.api.get_dir(root);
}


// CUSTOM DUT CONFIGS START
function select_target() {
    const targets = [];
    const target_num = 6;

    for (let i = 1; i <= target_num; ++i) {
        let target = document.getElementById(`target${i}`);
        if (target.checked) {
            targets.push(target.value);
        }
    }
    pywebview.api.select_target(targets.join(''));
}
 
 
 function set_csv_file() {
     pywebview.api.set_csv_file(
         document.getElementById('csv_dir').value,
         document.getElementById('csv_file').value
     );
 }
// CUSTOM DUT CONFIGS END


// TEST CONFIGS START
async function toggle_testcases(verif_fw) {
    const testcases = document.getElementById('testcases');
    let testcase_list = [],
        default_option = document.createElement('option');

    default_option.disabled = true;
    default_option.value = '';
    default_option.innerHTML = '--- Select testcase ---';
    testcases.replaceChildren(default_option);

    switch (verif_fw) {
        case 'riscv-dv':
            testcase_list = await pywebview.api.get_working_base_testlist();
            break;
        case 'riscv-arch-test':
            break;
        case 'self checking vector tests':
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
    const item_div = btn.parentElement.parentElement
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
            );
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


async function open_test_configs() {
    const hide = ['right_btn'],
          show = ['test_configs', 'left_btn', 'zap_btn'],
          empty_fields_modal = new bootstrap.Modal('#empty_fields');

    if (await validate_dut_fields()) {
        switch (await pywebview.api.get_dut_type()) {
            case 'custom':
                document.getElementById('custom_dut_configs').classList.add('d-none');
                break;
        }
        toggle_elements(hide, show);
    } else {
        empty_fields_modal.toggle();
    }
}


async function open_dut_configs() {
    const hide = ['test_configs', 'left_btn', 'zap_btn'],
          show = ['right_btn'];

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
                    // [config_key, input_tag_id, log_info_msg]
                    ['dut_path', 'dut', 'Uploaded DUT: '],
                    ['dut_disasm_path', 'dut_disasm', 'DUT disassembly dump directory: '],
                    ['dut_cmd', 'dut_cmd', 'DUT command: ']
                ];
                for (let config of config_list) {
                    let input_value = document.getElementById(config[1]).value;
                    pywebview.api.set_config(config[0], input_value, config[2] + input_value);
                }
                select_target();
                set_csv_file();
                break;
        }
        zap_progress();
        pywebview.api.zap_testlist();
    } else {
        empty_test_modal.toggle();
    }
}
// NAVIGATION END

