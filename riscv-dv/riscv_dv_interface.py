import os, logging

from types import ModuleType
from importlib import import_module

riscv_dv_lib: ModuleType = import_module('riscv-dv.scripts.lib')

from main import BURQ_SUITE_LOGS


def run_riscv_dv_test(**configs):
    logging.basicConfig(
        filename = os.path.join(BURQ_SUITE_LOGS, 'riscv-dv.log'),
        format   = '%(asctime)s %(filename)s %(message)s'
    )
    output_dir = riscv_dv_lib.create_output(configs['proj_path'],
                                            False)