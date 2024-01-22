import logging
import os
import sys
from importlib import import_module
from pprint import pformat

from scripts.dut_utils import *

riscv_dv_lib = import_module('riscv-dv.riscv-dv.scripts.lib')
# riscv_dv_lib = import_module('riscv-dv.scripts.lib')


RISCV_DV_YAMLS = os.path.join(RISCV_DV_ROOT, 'yaml')
SIMULATOR_YAML = os.path.join(RISCV_DV_YAMLS, 'simulator.yaml')
ISS_YAML = os.path.join(RISCV_DV_YAMLS, 'iss.yaml')
TESTLIST_YAML = os.path.join(RISCV_DV_ENV, 'working_base_testlist.yaml')
RISCV_DV_SCRIPTS = os.path.join(RISCV_DV_ROOT, 'scripts')


def get_working_base_testlist():
    logging.debug('Getting working base testlist...')
    testlist = riscv_dv_lib.read_yaml(TESTLIST_YAML)
    return [test['test'] for test in testlist]


# TODO: Add support for commercial simulators compatible with riscv-dv
def get_simulator_list():
    logging.debug('Getting simulator list...')
    for sim in riscv_dv_lib.read_yaml(SIMULATOR_YAML):
        if sim['tool'] == 'pyflow':
            return [sim]


# TODO: Add support for other iss compatible with riscv-dv
def get_iss_list():
    logging.debug('Getting ISS list...')
    for iss in riscv_dv_lib.read_yaml(ISS_YAML):
        if iss['iss'] == 'spike':
            return [iss]


def riscv_dv_run_test():
    logging.debug(f'Uploaded configurations:\n{pformat(configs, width=1)}')
    os.chdir(RISCV_DV_ROOT)
    logging.debug(f'Generating {configs["testcase"]}...')
    run_cmd([
        'python3', 'run.py',
        '--target', configs['target'],
        '--output', configs['proj_dir'],
        '--testlist', TESTLIST_YAML,
        '--test', configs['testcase'],
        '--iterations', configs['iterations'],
        '--simulator', configs['simulator'],
        '--iss', configs['iss'],
        '--verbose' if debug else ''
    ])
    logging.info(f'{configs["testcase"]} generated')

    logging.debug('Creating CSV and comparison result directories...')
    csv_dir = os.path.join(configs['proj_dir'], 'csv')
    compare_log_dir = os.path.join(configs['proj_dir'], 'compare_log')
    for folder in [csv_dir, compare_log_dir]:
        os.mkdir(folder)

    for i in range(int(configs['iterations'])):
        logging.debug(f'Running test iteration {i}...')
        dut_run_test(
            os.path.join(configs['proj_dir'], 'asm_test', f'{configs["testcase"]}_{i}.o'),
            os.path.join(configs['dut_disasm_path'], 'test.S')
        )
        os.chdir(RISCV_DV_SCRIPTS)
        logging.debug('Creating ISS trace CSV...')
        iss_csv = os.path.join(csv_dir, f'iss_csv_{i}.csv')
        run_cmd([
            'python3', 'spike_log_to_trace_csv.py',
            '--log', os.path.join(configs["proj_dir"], 'spike_sim', f'{configs["testcase"]}_{i}.o'),
            '--csv', iss_csv,
            '--verbose' if debug else ''
        ])
        logging.info('ISS CSV created')
        logging.debug('Comparing trace CSV...')
        run_cmd([
            'python3', 'instr_trace_compare.py',
            '--csv_file_1', iss_csv,
            '--csv_file_2', configs['dut_csv'],
            '--csv_name_1', 'ISS',
            '--csv_name_2', os.path.dirname(configs['dut_path']),
            '--log', os.path.join(compare_log_dir, f'comparison_{i}.log'),
            '--mismatch_print_limit', 100,
            '--verbose' if debug else ''
        ])
        logging.info('Comparison completed')

    print('END')
