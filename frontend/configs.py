from frontend.frontend_functs import *
from globals import *


def get_dut_type():
    return configs['dut_type']


def get_dir(root_dir=''):
    dir_path = select_folder(windows['main'], root_dir) if os.path.isdir(root_dir) else select_folder(windows['main'])
    return dir_path[0] if dir_path else ''


def select_target(target):
    target = 'rv32' + target
    configs['target'] = target
    logging.info(f'Selected target: {target}')


def set_log_file(dir_path, filename):
    file = os.path.join(dir_path, filename)
    configs['dut_log'] = file
    logging.info(f'DUT log file selected: {file}')


def set_config(key, value, log_info_msg):
    configs[key] = value
    logging.info(log_info_msg)
