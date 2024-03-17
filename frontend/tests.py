from os.path import isfile
import logging, os, time

from importlib import import_module

from globals import configs, windows, testlist
from frontend.frontend_functs import select_folder
from scripts.utils import dump_configs

riscv_dv_interface = import_module('riscv-dv.riscv_dv_interface')
riscv_compliance_interface = import_module('compliance.compliance_interface')


def get_dut_type():
    return configs['dut_type']


def open_dut_menu():
    windows['main'].load_url('frontend/web/index.html')
    configs.clear()


def get_dir(root_dir=''):
    return select_folder(windows['main'], root_dir) if root_dir else select_folder(windows['main'])


def clear_testlist():
    testlist.clear()


def remove_test(test):
    testlist.pop(test)


def add_test(verif_fw, test):
    testlist.append([verif_fw, test])


def select_target(target):
    target = 'rv32' + target
    configs['target'] = target
    logging.info(f'Selected target: {target}')


def set_csv_file(dir_path, filename):
    file = os.path.join(dir_path, filename)
    configs['dut_csv'] = file
    logging.info(f'DUT CSV file selected: {file}')


def set_config(key, value, log_info_msg):
    configs[key] = value
    logging.info(log_info_msg)


def zap_testlist():
    progress = 0
    windows['main'].evaluate_js(
        f'''
        window.update_progress_bar({progress});
        window.update_progress_label("Initializing tests");
        '''
    )
    cmp_logs_dir = os.path.join(configs['proj_path'], 'compare_logs')
    configs['cmp_dir'] = cmp_logs_dir
    os.makedirs(cmp_logs_dir)
    dump_configs()
    progress_part = 99 / len(testlist)
    progress += 1
    for i in range(len(testlist)):
        windows['main'].evaluate_js(
            f'''
            window.update_progress_bar({progress});
            window.update_progress_label("Executing test {i + 1} of {len(testlist)}: {testlist[i][1]}");
            '''
        )
        if testlist[i][0] == 'riscv-dv':
            progress = riscv_dv_interface.riscv_dv_run_test(testlist[i][1], i, progress_part, progress)
        elif testlist[i][0] == 'riscv-arch-test':
            riscv_compliance_interface.compliance_run_test(progress_part=progress_part, progress=progress)
        elif testlist[i][0] == 'self checking vector tests':
            pass
    windows['main'].evaluate_js(
        '''
        window.update_progress_bar(100);
        window.update_progress_label("Tests executed successfully");
        '''
    )
    time.sleep(1)
    windows['main'].evaluate_js(
        '''
        window.create_results();
        window.open_results();
        '''
    )


def get_test_status_list():
    test_status_list = []
    logfiles = os.listdir(configs['cmp_dir'])

    for i in range(len(logfiles)):
        current_file = os.path.join(configs['cmp_dir'], logfiles[i])
        if os.path.isfile(current_file):
            with open(current_file, 'r', encoding='utf-8') as f:
                lines = f.readlines()
            test_status_list.append([testlist[i], lines[-2].replace('\n', '')])

    return test_status_list

