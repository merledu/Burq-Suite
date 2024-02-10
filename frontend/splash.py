import webview, time

from frontend.login import *


def open_login():
    logging.info('Opening login')
    time.sleep(3)
    windows['login'] = webview.create_window(
        title='Burq Suite Login',
        url='frontend/web/login.html',
        width=350,
        height=400,
        resizable=False,
        frameless=True,
        on_top=True
    )
    windows['main'].events.closed += windows['login'].destroy
    windows['login'].expose(login)
