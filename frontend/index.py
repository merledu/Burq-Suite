import json

from frontend.new_proj import *


def open_new_proj(dut_type):
    configs['dut_type'] = dut_type
    logging.info(f'Selected DUT type: {dut_type.title()} DUT')
    windows['new_proj'] = webview.create_window(
        title='New project',
        url='frontend/web/new_proj.html',
        resizable=False,
        on_top=True,
        width=400,
        height=160,
        frameless=True
    )
    windows['main'].events.closed += windows['new_proj'].destroy
    windows['new_proj'].expose(
        cancel_new_proj,
        select_new_proj,
        create_new_proj
    )


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
