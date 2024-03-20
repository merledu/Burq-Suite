import logging, os, webview

from globals import BURQ_SUITE_LOGS, loglevel, windows, debug
from frontend.exposed_functs import expose


if __name__ == '__main__':
    logging.basicConfig(
        filename=os.path.join(BURQ_SUITE_LOGS, 'burq_suite.log'),
        filemode='w',
        format='%(asctime)s %(levelname)-8s %(filename)s %(message)s',
        datefmt='%d %b %Y %H:%M:%S',
        level=loglevel
    )
    windows['main'] = webview.create_window(
        title='Burq Suite',
        url='frontend/web/splash.html',
        # url='frontend/web/index.html',
        # url='frontend/web/tests.html',
        width=1200,
        height=600,
        resizable=False,
    )
    logging.info('Burq Suite started')
    webview.start(expose, [windows['main']], debug=debug)

