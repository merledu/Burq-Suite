import os, logging

from importlib import import_module

from paths import BURQ_SUITE_LOGS
from frontend.burq_suite import BurqSuite

# riscv_dv = import_module('riscv-dv.riscv_dv_interface')


def main():
    logging.basicConfig(
        filename=os.path.join(BURQ_SUITE_LOGS, 'burq_suite.log'),
        filemode='w',
        format  ='%(asctime)s %(levelname)-8s %(filename)s %(message)s',
        datefmt ='%d %b %Y %H:%M:%S',
        level   =logging.DEBUG
    )

    app = BurqSuite()

    logging.info('Starting Burq Suite')
    app.mainloop()


if __name__ == '__main__':
    main()