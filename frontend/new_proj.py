from frontend.frontend_functs import *


def select_new_proj():
    return select_folder(windows['new_proj'])


def cancel_new_proj():
    windows['main'].events.closed -= windows['new_proj'].destroy
    windows['new_proj'].destroy()


def create_new_proj():
    cancel_new_proj()
    windows['main'].load_url('frontend/web/configs.html')
