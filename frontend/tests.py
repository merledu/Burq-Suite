import logging, os, time

from importlib import import_module

from globals import BURQ_SUITE_ROOT, configs, windows
from frontend.frontend_functs import select_folder
from utils import dump_configs

riscv_dv_interface = import_module('riscv-dv.riscv_dv_interface')
riscv_compliance_interface = import_module('compliance.compliance_interface')
self_checking_tests_interface = import_module('self_checking_tests.self_checking_tests_interface')

def get_dut_type():
    return configs['dut_type']

def open_dut_menu():
    windows['main'].load_url('frontend/web/index.html')
    configs.clear()

def get_dir(root_dir=''):
    return select_folder(windows['main'], root_dir) if root_dir else select_folder(windows['main'])

def clear_testlist():
    configs['testlist'].clear()

def remove_test(test):
    configs['testlist'].pop(test)

def add_test(verif_fw, test):
    configs['testlist'].append([verif_fw, test])

def select_extension(extension):
    configs['extension'] = extension
    logging.info(f'Selected extension: {extension}')

def select_variant(variant):
    configs['variant'] = variant
    logging.info(f'Selected variant: {variant}')

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
        update_progress_bar({progress});
        update_progress_label("Initializing tests");
        '''
    )
    configs['target'] = 'rv' + configs['variant'] + configs['extension']
    cmp_logs_dir = os.path.join(configs['proj_path'], 'compare_logs')
    configs['cmp_dir'] = cmp_logs_dir
    if not os.path.exists(cmp_logs_dir):
        os.makedirs(cmp_logs_dir)
    dump_configs()
    progress_part = 99 / len(configs['testlist'])
    progress += 1
    for i in range(len(configs['testlist'])):
        windows['main'].evaluate_js(
            f'''
            update_progress_bar({progress});
            update_progress_label("Executing test {i + 1} of {len(configs['testlist'])}: {configs['testlist'][i][1].replace('_', ' ')}");
            '''
        )
        if configs['testlist'][i][0] == 'riscv-dv':
            progress = riscv_dv_interface.riscv_dv_run_test(configs['testlist'][i][1], i, progress_part, progress)
        elif configs['testlist'][i][0] == 'riscv-arch-test':
            riscv_compliance_interface.compliance_run_test(progress_part, progress)
        elif configs['testlist'][i][0] in ['Burq_Generated_Tests', 'Riscv-tests', 'Swerv Tests', 'Floating_point_tests_for_azadi', 'MERL_vector_Tests', 'Self-Checking-vector-tests']:
            self_checking_tests_interface.self_checking_run_test(configs['testlist'][i][1], i, progress_part, progress)
    windows['main'].evaluate_js(
        '''
        update_progress_bar(100);
        update_progress_label("Tests executed successfully");
        '''
    )
    time.sleep(1)
    os.chdir(BURQ_SUITE_ROOT)
    windows['main'].evaluate_js(
        '''
        create_results();
        open_results();
        '''
    )

def get_test_status_list():
    test_status_list = []
    with os.scandir(configs['cmp_dir']) as it:
        for i, logfile in enumerate(it):
            # TODO: Gotta do some elaborate checking of file
            if logfile.is_file():
                with open(logfile.path) as f:
                    lines = f.readlines()
                test_status_list.append([
                    configs['testlist'][i][0],
                    configs['testlist'][i][1].replace('_', ' '),
                    lines[-2].replace('\n', '')
                ])
    return test_status_list

def open_proj_browser():
    logging.info('Opening project browser')
    windows['main'].load_url('frontend/web/project_browser.html')
