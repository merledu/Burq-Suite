import logging, webview, time

from globals import windows
from frontend.login import login


def open_login():
    logging.info('pywebview.api is ready')
    time.sleep(3)
    login_window = webview.create_window(
        title='Burq Suite Login',
        url='frontend/web/login.html',
        width=350,
        height=400,
        resizable=False,
        frameless=True,
        on_top=True
    )
    windows['main'].events.closed += login_window.destroy
    windows['login'] = login_window

    login_window.expose(login)