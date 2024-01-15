import logging

from globals import windows, configs
from frontend.frontend_functs import select_folder


def select_proj_folder():
    dir_paths = select_folder(windows['main'])
    dir_path = dir_paths[0] if dir_paths else dir_paths
    logging.info(f'Selected project directory: {dir_path}')
    configs['proj_dir'] = dir_path
    return {'dir_path': dir_path}


def open_dut_configs(dut_type):
    logging.info(f'Selected DUT type: {dut_type.title()} DUT')
    configs['dut_type'] = dut_type

    windows['main'].load_url('frontend/web/configs.html')
    return