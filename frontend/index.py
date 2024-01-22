from globals import *
from frontend.frontend_functs import *


def select_proj_folder():
    dir_paths = select_folder(windows['main'])
    dir_path = dir_paths[0] if dir_paths else dir_paths
    configs['proj_dir'] = dir_path
    logging.info(f'Selected project directory: {dir_path}')
    return dir_path


def open_dut_configs(dut_type):
    configs['dut_type'] = dut_type
    logging.info(f'Selected DUT type: {dut_type.title()} DUT')

    windows['main'].load_url('frontend/web/configs.html')
