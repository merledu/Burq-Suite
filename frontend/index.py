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

    if dut_type == 'custom':
        windows['main'].load_url('frontend/web/custom_dut_configs.html')
    elif dut_type == 'prebuilt':
        windows['main'].load_url('frontend/web/prebuilt_dut_configs.html')
    elif dut_type == 'soc-now':
        windows['main'].load_url('frontend/web/soc-now_dut_configs.html')
    return