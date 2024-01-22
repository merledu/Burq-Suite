import webview

from globals import *


def get_stderr():
    return stderr['stderr']


def unsubscribe_stderr_from_main():
    windows['main'].events.closed -= windows['stderr'].destroy


def continue_exec():
    stderr['halt_exec'] = False


def open_stderr_window():
    windows['stderr'] = webview.create_window(
        title='STDERR',
        url='frontend/web/stderr.html',
        width=800,
        height=400,
        resizable=False,
        on_top=True
    )
    windows['stderr'].expose(get_stderr)
    windows['main'].events.closed += windows['stderr'].destroy
    windows['stderr'].events.closed += unsubscribe_stderr_from_main
    windows['stderr'].events.closed += continue_exec
