import webview

from globals import HOME


def select_folder(window, initial_dir=HOME):
    return window.create_file_dialog(webview.FOLDER_DIALOG, initial_dir)