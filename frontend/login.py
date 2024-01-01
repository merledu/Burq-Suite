import logging

from globals import windows


def login(usr, passwd):
    if usr == 'admin' and passwd == 'admin':
        logging.info('Logged in successfully')
        windows['main'].events.closed -= windows['login'].destroy
        windows['login'].destroy()
        windows.pop('login')
        windows['main'].load_url('frontend/web/index.html')
        return
    else:
        logging.info('Incorrect username or password')
        return {'access': False}