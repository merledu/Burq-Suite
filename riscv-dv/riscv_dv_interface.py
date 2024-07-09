import os, logging
from importlib import import_module

from globals import (
    RISCV_DV_ROOT,
    RISCV_DV_ENV,
    configs,
    testlist,
    windows,
    RISCV32_GNU_TOOLCHAIN,
    RISCV64_GNU_TOOLCHAIN
)
from scripts.utils import run_cmd, dut_run_test

riscv_dv_lib = import_module('riscv-dv.riscv-dv.scripts.lib')


RISCV_DV_YAMLS = os.path.join(RISCV_DV_ROOT, 'yaml')
TESTLIST_YAML = os.path.join(RISCV_DV_ENV, 'working_base_testlist.yaml')
RISCV_DV_SCRIPTS = os.path.join(RISCV_DV_ROOT, 'scripts')
ITERATIONS = '1'
SIMULATOR = 'pyflow'
ISS = 'spike'


def get_working_base_testlist():
    logging.info('Getting working base testlist')
    working_testlist = riscv_dv_lib.read_yaml(TESTLIST_YAML)
    return [test['test'] for test in working_testlist]


def create_iss_log(test_dir, test, test_num):
    os.chdir(RISCV_DV_ROOT)
    run_cmd([
        'python3', 'run.py',
        '--target', configs['target'],
        '--output', test_dir,
        '--testlist', TESTLIST_YAML,
        '--test', test,
        '--iterations', ITERATIONS,
        '--simulator', SIMULATOR,
        '--iss', ISS
    ])
    logging.info(f'{testlist[test_num][1]} generated')


def create_iss_csv(iss, csv_path, log_path):
    os.chdir(RISCV_DV_SCRIPTS)
    run_cmd([
        'python3', f'{iss}_log_to_trace_csv.py',
        '--log', log_path,
        '--csv', csv_path
    ])
    logging.info('ISS CSV created')


def compare_csv(iss_csv, compare_log_path, dut_name):
    os.chdir(RISCV_DV_SCRIPTS)
    run_cmd([
        'python3', 'instr_trace_compare.py',
        '--csv_file_1', iss_csv,
        '--csv_file_2', configs['dut_csv'],
        '--csv_name_1', 'ISS',
        '--csv_name_2', dut_name,
        '--log', compare_log_path,
        '--mismatch_print_limit', '100'
    ])


def riscv_dv_run_test(test, test_num, progress_part, progress):
    test_dir = os.path.join(configs['proj_path'], f'riscv_dv_out_{test_num}')
    if configs['variant'] == '64':
        os.environ['RISCV_GCC'] = os.path.join(RISCV64_GNU_TOOLCHAIN, 'riscv64-unknown-elf-gcc')
        os.environ['RISCV_OBJCOPY'] = os.path.join(RISCV64_GNU_TOOLCHAIN, 'riscv64-unknown-elf-objcopy')
        os.environ['PATH'] = RISCV64_GNU_TOOLCHAIN + os.pathsep + os.environ['PATH']
    else:
        os.environ['RISCV_GCC'] = os.path.join(RISCV32_GNU_TOOLCHAIN, 'riscv32-unknown-elf-gcc')
        os.environ['RISCV_OBJCOPY'] = os.path.join(RISCV32_GNU_TOOLCHAIN, 'riscv32-unknown-elf-objcopy')
        os.environ['PATH'] = RISCV32_GNU_TOOLCHAIN + os.pathsep + os.environ['PATH']
    create_iss_log(test_dir, test, test_num)
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
    create_iss_csv(ISS, iss_csv_path, os.path.join(test_dir, 'spike_sim', f'{test}_0.log'))
    progress += (1 / 10) * progress_part
    windows['main'].evaluate_js(
        f"""
        window.update_progress_bar({progress});
        """
    )
    compare_csv(iss_csv_path, os.path.join(configs['cmp_dir'], f'cmp_{test_num}.log'), os.path.basename(configs['dut_path']))
    logging.info('Comparison completed')
    progress += (1 / 10) * progress_part
    windows['main'].evaluate_js(
        f"""
        window.update_progress_bar({progress});
        """
    )
    return progress

