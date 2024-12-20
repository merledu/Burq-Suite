import logging, os, webview

from globals import (
    BURQ_SUITE_LOGS,
    LOGLEVEL,
    DEBUG,
    BURQ_SUITE_WEB,
    WIDTH,
    HEIGHT,
    windows
)
from frontend.exposed_functs import expose

if __name__ == '__main__':
    logging.basicConfig(
        filename = os.path.join(BURQ_SUITE_LOGS, 'burq_suite.log'),
        filemode = 'w',
        format = '%(asctime)s %(levelname)-8s %(filename)s %(message)s',
        datefmt = '%d %b %Y %H:%M:%S',
        level = LOGLEVEL
    )
    windows['main'] = webview.create_window(
        'Burq Suite',
        os.path.join(BURQ_SUITE_WEB, 'splash.html'),
        #os.path.join(BURQ_SUITE_WEB, 'index.html'),
        #os.path.join(BURQ_SUITE_WEB, 'tests.html'),
        width = WIDTH,
        height = HEIGHT,
        min_size = (WIDTH, HEIGHT)
    )
    logging.info('Burq Suite started')
    webview.start(
        expose, (windows['main'],),
        debug = DEBUG
    )
