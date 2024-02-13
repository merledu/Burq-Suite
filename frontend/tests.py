from frontend.frontend_functs import *
from globals import *


def get_dut_type():
    return configs['dut_type']


def open_dut_menu():
    windows['main'].load_url('frontend/web/index.html')
    configs.clear()


def get_dir(root_dir=''):
    return select_folder(windows['main'], root_dir) if root_dir else select_folder(windows['main'])


def clear_testlist():
    selected_tests.clear()


def remove_test(test):
    selected_tests.pop(test)


def add_test(verif_fw, test):
    selected_tests.append({verif_fw: test})


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
