import os, logging

from importlib import import_module
from types import ModuleType

riscv_dv: ModuleType = import_module('riscv-dv.riscv_dv_interface')

BURQ_SUITE_ROOT: str = os.path.dirname(os.path.abspath(__file__))
BURQ_SUITE_LOGS: str = os.path.join(BURQ_SUITE_ROOT, 'logs')
RISCV_DV_ENV   : str = os.path.join(BURQ_SUITE_ROOT, 'riscv-dv')
RISCV_DV_ROOT  : str = os.path.join(RISCV_DV_ENV, 'riscv-dv')


def main() -> None:
    logging.basicConfig(
        filename = os.path.join(BURQ_SUITE_LOGS, 'a.log'),
        filemode = 'w',
        format   = '%(asctime)s %(levelname)-8s %(filename)s %(message)s',
        datefmt  = '%d %b %Y %H:%M:%S',
        level    = logging.DEBUG
    )

    riscv_dv.run_test(proj_path = '/home/5hayanB/temporary/riscv-dv-out/1',
                      noclean   = False,
                      target    = 'rv32i',
                      test      = 'riscv_arithmetic_basic_test')

    return None


if __name__ == '__main__':
    main()