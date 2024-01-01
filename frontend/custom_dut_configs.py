import logging, os

from frontend.frontend_functs import select_folder
from globals import windows, configs


def upload_dut():
    dir_paths = select_folder(windows['main'])
    dir_path = dir_paths[0] if dir_paths else dir_paths
    logging.info(f'Uploaded DUT: {dir_path}')
    configs['dut_path'] = dir_path
    return {'dir_path': dir_path}


def select_target(target):
    target = 'rv32' + target
    logging.info(f'Selected target: {target}')
    configs['target'] = target
    return


def dump_dut_disasm():
    if 'dut_path' in configs and configs['dut_path']:
        dir_path = select_folder(windows['main'], configs['dut_path'][0])
    else:
        dir_path = select_folder(windows['main'])
    logging.info(f'DUT disassembly dump directory: {dir_path}')
    configs['dut_disasm_path'] = dir_path
    return


def get_dut_cmd(cmd):
    logging.info(f'DUT command: {cmd}')
    configs['dut_cmd'] = cmd
    return


def get_log_dir():
    if 'dut_path' in configs and configs['dut_path']:
        dir_path = select_folder(windows['main'], configs['dut_path'])
    else:
        dir_path = select_folder(windows['main'])
    return {'dir_path': dir_path}


def get_log_file(dir_path, filename):
    file = os.path.join(dir_path, filename)
    logging.info(f'DUT log file selected: {file}')
    configs['dut_log'] = file
    return