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


async function upload_dut() {
    const dut_dir = await pywebview.api.upload_dut();

    document.getElementById('dut').value = dut_dir['dir_path'];
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


async function dut_disasm_path() {
    const dir = await pywebview.api.dump_dut_disasm();

    document.getElementById('dut_disasm').value = dir['dir_path'];
}


function get_dut_cmd() {
    pywebview.api.get_dut_cmd(document.getElementById('dut_cmd').value);
}


async function get_log_dir() {
    const dir = await pywebview.api.get_log_dir();

    document.getElementById('log_dir').value = dir['dir_path'];
}


function get_log_file() {
    pywebview.api.get_log_file(
        document.getElementById('log_dir').value,
        document.getElementById('log_file').value
    );
}


function open_testcase_configs() {
    const upload_dut = document.getElementById('dut');
    const dut_disasm = document.getElementById('dut_disasm');
    const dut_cmd = document.getElementById('dut_cmd');
    const log_dir = document.getElementById('log_dir');
    const log_file = document.getElementById('log_file');

    const empty_fields_modal = new bootstrap.Modal('#empty_fields');

    if (upload_dut.value && dut_disasm.value && dut_cmd.value && log_dir.value && log_file.value) {
        document.getElementById('custom_dut_configs').classList.add('d-none');
        document.querySelector('button.btn.ms-auto.text-white').classList.add('d-none');
        document.getElementById('testcase_configs').classList.remove('d-none');
        document.querySelector('button.btn.me-auto.text-white').classList.remove('d-none');
    } else {
        empty_fields_modal.toggle();
    }
}


function open_dut_configs() {
    document.getElementById('testcase_configs').classList.add('d-none');
    document.querySelector('button.btn.me-auto.text-white').classList.add('d-none');
    document.getElementById('custom_dut_configs').classList.remove('d-none');
    document.querySelector('button.btn.ms-auto.text-white').classList.remove('d-none');
}


async function show_testcases(verif_fw) {
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
            testcase_opt.innerHTML = testcase;
            testcases.insertAdjacentElement('beforeend', testcase_opt);
        }
        testcase_div.classList.remove('d-none');
    }
}


async function show_simulators() {
    const simulator_select_div = document.getElementById('simulator_select_div');
    const simulators = document.getElementById('simulator_select');

    const simulator_list = await pywebview.api.get_simulator_list();
    for (let simulator of simulator_list) {
        let simulator_opt = document.createElement('option');
        simulator_opt.value = simulator;
        simulator_opt.innerHTML = simulator;
        simulators.insertAdjacentElement('beforeend', simulator_opt);
    }
    simulator_select_div.classList.remove('d-none');
}


function show_testcase_configs() {
    const verif_fw = document.getElementById('verif_fw');

    show_testcases(verif_fw);
}
