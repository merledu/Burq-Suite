import webview

from globals import HOME

def select_folder(window, initial_dir=HOME):
    dir_paths = window.create_file_dialog(webview.FOLDER_DIALOG, initial_dir)
    return dir_paths[0] if dir_paths else ''
