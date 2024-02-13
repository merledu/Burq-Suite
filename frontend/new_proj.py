from frontend.frontend_functs import *


def select_new_proj():
    return select_folder(windows['new_proj'])


def cancel_new_proj():
    windows['main'].events.closed -= windows['new_proj'].destroy
    windows['new_proj'].destroy()
    windows.pop('new_proj')


def create_new_proj(proj_path):
    logging.info(f'Project path: {proj_path}')
    configs['proj_path'] = proj_path
    cancel_new_proj()
    windows['main'].load_url('frontend/web/tests.html')
