import json, logging, os

from globals import configs, windows
from frontend.frontend_functs import select_folder

def open_new_proj(dut_type):
    configs['dut_type'] = dut_type
    logging.info(f'Selected DUT type: {dut_type.title()} DUT')
    windows['main'].evaluate_js(
        '''
        new_proj_modal.toggle()
        '''
    )

def create_new_proj(proj_path):
    logging.info(f'Project path: {proj_path}')
    configs['proj_path'] = proj_path
    windows['main'].evaluate_js(
        '''
        new_proj_modal.toggle()
        '''
    )
    windows['main'].load_url('frontend/web/tests.html')

def select_proj_folder():
    return select_folder(windows['main'])

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
        windows['main'].load_url('frontend/web/tests.html')
    except FileNotFoundError:
        return False
    except KeyError:
        return False
