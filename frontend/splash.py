import time, logging

from globals import windows


def open_login():
    logging.info('Opening login')
    time.sleep(3)
    windows['main'].evaluate_js(
        '''
        login_modal.toggle()
        '''
    )


def login(usr, passwd):
    if usr == 'admin' and passwd == 'admin':
        logging.info('Logged in successfully')
        windows['main'].evaluate_js(
            '''
            login_modal.toggle()
            '''
        )
        windows['main'].load_url('frontend/web/index.html')
    else:
        logging.info('Incorrect username or password')
        return False
