import os, logging
from importlib import import_module
from utils import run_cmd, dut_run_test

from globals import (
    SELF_CHECKING_TESTS_ENV, 
    RISCV_DV_ROOT,
    configs,
    windows,
    testlist
)

riscv_dv_interface = import_module('riscv-dv.riscv_dv_interface')

SIMULATOR = riscv_dv_interface.SIMULATOR
ISS = riscv_dv_interface.ISS


def get_self_checking_tests_category():
    return [os.path.basename(f.path) for f in os.scandir(SELF_CHECKING_TESTS_ENV) if f.is_dir()]


def get_self_checking_testcases(verif_fw):
    parent_directories = get_self_checking_tests_category()
    subdirectories = {}
    for parent_dir in parent_directories:
        full_parent_path = os.path.join(SELF_CHECKING_TESTS_ENV, parent_dir)
        subdirectories[parent_dir] = [os.path.basename(f.path) for f in os.scandir(full_parent_path) if f.is_dir()]
    return subdirectories[verif_fw]


def get_verif_fw_testscases():
    verif_fw = windows['main'].evaluate_js(
        f'''
        window.return_verif_fw();
        '''
    )
    testcases = windows['main'].evaluate_js(
        f'''
        window.return_testcases();
        '''
    )  
    return verif_fw, testcases

def create_iss_log(test_num, test_dir):
    verif_fw, testcases = get_verif_fw_testscases()
    os.chdir(RISCV_DV_ROOT)
    run_cmd([
        'python3', 'run.py',
        '--target', configs['target'],
        '--simulator', SIMULATOR,
        '--iss', ISS,
        '--c_test', f"{SELF_CHECKING_TESTS_ENV}/{verif_fw}/{testcases}/{testcases}.c",
        '--output', test_dir
    ])
    logging.info(f'{testlist[test_num][1]} generated')
    
    
def self_checking_run_test(test, test_num, progress_part, progress):
    test_dir = os.path.join(configs['proj_path'], f'self_checking_tests_out_{test_num}')
    create_iss_log(test_num, test_dir)
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
    print("Hello")
    dut_run_test(
        os.path.join(test_dir, 'asm_test', f'{test}_0.o'),
        os.path.join(configs['dut_disasm_path'], 'test.S')
    )
    progress += (3 / 10) * progress_part
    windows['main'].evaluate_js(
        f'''
        window.update_progress_bar({progress});
        '''
    )
    iss_csv_path = os.path.join(test_dir, 'iss.csv')
    riscv_dv_interface.create_iss_csv(
        ISS,
        iss_csv_path, 
        os.path.join(test_dir, 'spike_sim', f'{test}_0.log')
    )
    progress += (1 / 10) * progress_part
    windows['main'].evaluate_js(
        f"""
        window.update_progress_bar({progress});
        """
    )
    riscv_dv_interface.compare_csv(iss_csv_path, os.path.join(configs['cmp_dir'], f'cmp_{test_num}.log'), os.path.basename(configs['dut_path']))
    logging.info('Comparison completed')
    progress += (1 / 10) * progress_part
    windows['main'].evaluate_js(
        f"""
        window.update_progress_bar({progress});
        """
    )
    return progress

