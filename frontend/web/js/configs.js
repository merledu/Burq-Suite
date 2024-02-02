const tooltip_trigger_list = document.querySelectorAll('[data-bs-toggle="tooltip"]');
const tooltip_list = [...tooltip_trigger_list].map(tooltip_trigger_elem => new bootstrap.Tooltip(tooltip_trigger_elem));


function open_dut_menu() {
    pywebview.api.open_dut_menu();
}


async function highlight_dut_type() {
    const dut_type = await pywebview.api.get_dut_type();
    const dut_type_div = document.getElementById(dut_type);
    dut_type_div.classList.add('rounded-pill');

    if (dut_type === 'custom') {
        dut_type_div.style.backgroundColor = '#A851FF';
    } else if (dut_type === 'prebuilt') {
        dut_type_div.style.backgroundColor = '#0CA17E';
    } else if (dut_type === 'soc-now') {
        dut_type_div.style.backgroundColor = '#436EEE';
    }
}


window.addEventListener('pywebviewready', () => {
    highlight_dut_type();
});


async function get_dir(input_id, root='') {
    document.getElementById(input_id).value = await pywebview.api.get_dir(root);
}


function select_target() {
    const targets = [];
    const target_num = 6;

    for (let i = 1; i < target_num; ++i) {
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


function validate_dut_fields() {
    return ['dut', 'dut_disasm', 'dut_cmd', 'csv_dir', 'csv_file'].map(
        id => document.getElementById(id).value
    ).reduce((a, b) => a && b)
}


function open_testcase_configs() {
    const empty_fields_modal = new bootstrap.Modal('#empty_fields');

    if (validate_dut_fields) {
        document.getElementById('custom_dut_configs').classList.add('d-none');
        document.querySelector('button.btn.ms-auto.text-white').classList.add('d-none');
        document.getElementById('testcase_configs').classList.remove('d-none');
        document.querySelector('button.btn.me-auto.text-white').classList.remove('d-none');
        document.querySelector('button.btn.ms-auto.btn-outline-warning').classList.remove('d-none');
    } else {
        empty_fields_modal.toggle();
    }
}


function open_dut_configs() {
    document.getElementById('testcase_configs').classList.add('d-none');
    document.querySelector('button.btn.me-auto.text-white').classList.add('d-none');
    document.querySelector('button.btn.ms-auto.btn-outline-warning').classList.add('d-none');
    document.getElementById('custom_dut_configs').classList.remove('d-none');
    document.querySelector('button.btn.ms-auto.text-white').classList.remove('d-none');
}


async function toggle_testcases(verif_fw) {
    const testcase_div = document.getElementById('testcase_div');
    const testcases = document.getElementById('testcases');

    if (verif_fw.value) {
        let testcase_list = [];
        if (verif_fw.value === 'riscv-dv') {
            testcase_list = await pywebview.api.get_working_base_testlist();
        }

        for (let testcase of testcase_list) {
            let testcase_opt = document.createElement('option');
            testcase_opt.value = testcase;
            testcase_opt.innerHTML = testcase.replace(/_/g, ' ');
            testcases.insertAdjacentElement('beforeend', testcase_opt);
        }
        testcase_div.classList.remove('d-none');
    }
}


async function toggle_simulators() {
    const simulator_select_div = document.getElementById('simulator_select_div');
    const simulators = document.getElementById('simulator_select');

    const simulator_list = await pywebview.api.get_simulator_list();
    for (let simulator of simulator_list) {
        let simulator_opt = document.createElement('option');
        simulator_opt.value = simulator['tool'];
        simulator_opt.innerHTML = simulator['tool'];
        simulators.insertAdjacentElement('beforeend', simulator_opt);
    }
    simulator_select_div.classList.remove('d-none');
}


async function toggle_iss() {
    const iss_select_div = document.getElementById('iss_select_div');
    const iss_select = document.getElementById('iss_select');

    const iss_list = await pywebview.api.get_iss_list();
    for (let iss of iss_list) {
        let iss_opt = document.createElement('option');
        iss_opt.value = iss['iss'];
        iss_opt.innerHTML = iss['iss'];
        iss_select.insertAdjacentElement('beforeend', iss_opt);
    }
    iss_select_div.classList.remove('d-none');
}


function toggle_iterations() {
    document.getElementById('iterations_div').classList.remove('d-none');
}


function show_testcase_configs() {
    const verif_fw = document.getElementById('verif_fw');

    toggle_testcases(verif_fw);
    toggle_simulators();
    toggle_iss();
    toggle_iterations();
}


function validate_testcase_fields() {
    return ['verif_fw', 'testcases', 'simulator_select', 'iss_select', 'iterations'].map(
        id => document.getElementById(id).value
    ).reduce((a, b) => a && b)
}


function test_run_progress() {
    document.getElementById('testcase_configs').classList.add('d-none');
    document.getElementById('nav_btns').classList.add('d-none');
    document.getElementById('test_run').classList.remove('d-none');
}


async function run_riscv_dv_test() {
    const config_list = [
        // [config key, input tag id, log info msg]
        //
        // Custom DUT Configs
        ['dut_path', 'dut', 'Uploaded DUT: '],
        ['dut_disasm_path', 'dut_disasm', 'DUT disassembly dump directory: '],
        ['dut_cmd', 'dut_cmd', 'DUT command: '],

        // Testcase Configs
        ['verif_fw', 'verif_fw', 'Selected verification framework: '],
        ['testcase', 'testcases', 'Selected testcase: '],
        ['simulator', 'simulator_select', 'Selected simulator: '],
        ['iss', 'iss_select', 'Selected ISS: '],
        ['iterations', 'iterations', 'Number of iterations: ']
    ];

    const empty_fields_modal = new bootstrap.Modal('#empty_fields');

    if (validate_testcase_fields()) {
        for (let config of config_list) {
            let input_value = document.getElementById(config[1]).value;
            pywebview.api.set_config(config[0], input_value, config[2] + input_value);
        }
        select_target();
        set_csv_file();
        test_run_progress();
        pywebview.api.riscv_dv_run_test();
    } else {
        empty_fields_modal.toggle();
    }
}

