import json

from frontend.frontend_functs import *


def open_configs(dut_type):
    configs['dut_type'] = dut_type
    logging.info(f'Selected DUT type: {dut_type.title()} DUT')
    windows['main'].load_url('frontend/web/configs.html')


def select_proj_folder():
    dir_paths = select_folder(windows['main'])
    return dir_paths[0] if dir_paths else ''


def open_proj(folder):
    try:
        valid_root = False
        with open(os.path.join(folder, 'test_configs.json'), 'r', encoding='UTF-8') as f:
            for k, v in json.load(f):
                if k == 'dut_type':
                    valid_root = True
                configs[k] = v
        if not valid_root:
            raise KeyError
        logging.info(f'Opening project: {folder}')
        windows['main'].load_url('frontend/web/configs.html')
    except FileNotFoundError:
        return False
    except KeyError:
        return False
