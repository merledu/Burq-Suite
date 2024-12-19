import os, webview, \
    os.path as path

from globals import windows, configs

def get_proj_path():
    return configs['proj_path']

def close_proj_browser():
    pass

def retrieve_dir_contents(root):
    dirpath, dirnames, filenames = next(os.walk(root))
    return {
        'dirnames': [
            path.join(dirpath, dirname)
            for dirname in dirnames
        ],
        'filenames': [
            path.join(dirpath, filename)
            for filename in filenames
        ]
    }

def show_file(file): pass

def get_test_results():
    return {}

if __name__ == '__main__':
    windows['proj_browser'] = webview.create_window(
        # title=configs['proj_name'],
        title='',
        # url='frontend/web/project_browser.html',
        url='web/project_browser.html',
        fullscreen=True,
        resizable=False,
        on_top=True
    )
    windows['proj_browser'].expose(
        retrieve_dir_contents,
        close_proj_browser
    )
    # windows['main'].events.closed += windows['proj_browser'].destroy
    # windows['proj_browser'].events.closed += close_proj_browser
    webview.start(debug=True)
