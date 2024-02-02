from scripts.dut_utils import *


def get_proj_name():
    # return configs['proj_name']
    return 'Hey'


def close_proj_browser():
    windows['main'].events.closed -= windows['proj_browser'].destroy
    windows['proj_browser'].destroy()


def get_proj_tree():
    tree_map = []

    # for dirpath, dirnames, filenames in os.walk(configs['proj_dir']):
    for dirpath, dirnames, filenames in os.walk(os.path.join(os.environ['HOME'], 'temporary', 'riscv-dv-outputs')):
        tree_map.append({
            'path': dirpath,
            'files': filenames,
            'folders': dirnames
        })

    return tree_map


def open_proj_browser():
    windows['proj_browser'] = webview.create_window(
        # title=configs['proj_name'],
        title='',
        # url='frontend/web/project_browser.html',
        url='web/project_browser.html',
        fullscreen=True,
        resizable=False,
        on_top=True
    )
    windows['proj_browser'].expose(get_proj_name, get_proj_tree)
    # windows['main'].events.closed += windows['proj_browser'].destroy
    # windows['proj_browser'].events.closed += close_proj_browser
    webview.start(debug=True)


if __name__ == '__main__':
    open_proj_browser()
