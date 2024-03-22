import os
from importlib import import_module
from scripts.utils import run_cmd, dut_run_test

from globals import (
    SELF_CHECKING_TESTS_ENV, 
    RISCV_DV_ROOT,
    configs,
    windows
)

riscv_dv_interface = import_module('riscv-dv.riscv_dv_interface')

SIMULATOR = 'pyflow'
ISS = 'spike'


def get_self_checking_tests_category():
    return [os.path.basename(f.path) for f in os.scandir(SELF_CHECKING_TESTS_ENV) if f.is_dir()]


def get_self_checking_testcases(verif_fw):
    parent_directories = get_self_checking_tests_category()
    subdirectories = {}
    for parent_dir in parent_directories:
        full_parent_path = os.path.join(SELF_CHECKING_TESTS_ENV, parent_dir)
        subdirectories[parent_dir] = [os.path.basename(f.path) for f in os.scandir(full_parent_path) if f.is_dir()]
    return subdirectories[verif_fw]


def create_iss_log(test_dir):
    os.chdir(RISCV_DV_ROOT)
    run_cmd([
        'python3', 'run.py',
        '--target', configs['target'],
        '--simulator', SIMULATOR,
        '--iss', ISS,
        '--c_test', 
        '--output', test_dir
    ])
    
def self_checking_run_test(progress_part, progress):
    test_dir = os.path.join(configs['proj_path'], f'self_checking_tests')
    create_iss_log(test_dir)
    progress += (4 / 10) * progress_part
    windows['main'].evaluate_js(
        f'''
        window.update_progress_bar({progress});
        '''
    )
    progress += (1 / 10) * progress_part
    windows['main'].evaluate_js(
        f'''
        window.update_progress_bar({progress});
        '''
    )
    dut_run_test(
        
    )
    progress += (3 / 10) * progress_part
    windows['main'].evaluate_js(
        f'''
        window.update_progress_bar({progress});
        '''
    )
    riscv_dv_interface.create_iss_csv
    

if __name__ == '__main__':
    get_self_checking_tests_category()

