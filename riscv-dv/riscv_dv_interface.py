from importlib import import_module
from pprint import pformat

from scripts.utils import *

riscv_dv_lib = import_module('riscv-dv.riscv-dv.scripts.lib')
# riscv_dv_lib = import_module('riscv-dv.scripts.lib')


RISCV_DV_YAMLS = os.path.join(RISCV_DV_ROOT, 'yaml')
SIMULATOR_YAML = os.path.join(RISCV_DV_YAMLS, 'simulator.yaml')
ISS_YAML = os.path.join(RISCV_DV_YAMLS, 'iss.yaml')
TESTLIST_YAML = os.path.join(RISCV_DV_ENV, 'working_base_testlist.yaml')
RISCV_DV_SCRIPTS = os.path.join(RISCV_DV_ROOT, 'scripts')


def get_working_base_testlist():
    logging.info('Getting working base testlist')
    testlist = riscv_dv_lib.read_yaml(TESTLIST_YAML)
    return [test['test'] for test in testlist]


# TODO: Add support for commercial simulators compatible with riscv-dv
def get_simulator_list():
    logging.info('Getting simulator list')
    for sim in riscv_dv_lib.read_yaml(SIMULATOR_YAML):
        if sim['tool'] == 'pyflow':
            return [sim]


# TODO: Add support for other iss compatible with riscv-dv
def get_iss_list():
    logging.info('Getting ISS list')
    for iss in riscv_dv_lib.read_yaml(ISS_YAML):
        if iss['iss'] == 'spike':
            return [iss]


def riscv_dv_run_test():
    dump_configs()
    os.chdir(RISCV_DV_ROOT)
    run_cmd([
        'python3', 'run.py',
        f'--target', configs['target'],
        f'--output', configs['proj_dir'],
        f'--testlist', TESTLIST_YAML,
        f'--test', configs['testcase'],
        f'--iterations', configs['iterations'],
        f'--simulator', configs['simulator'],
        f'--iss', configs['iss']
    ])
    logging.info(f'{configs["testcase"]} generated')
    progress = 45
    windows['main'].evaluate_js(
        f"""
        window.update_progress({progress}, 'Executing testcase on ISS');
        """
    )

    csv_dir = os.path.join(configs['proj_dir'], 'csv')
    compare_log_dir = os.path.join(configs['proj_dir'], 'compare_log')
    for folder in [csv_dir, compare_log_dir]:
        os.mkdir(folder)
    logging.info('CSV and comparison result directories created')

    iterations = int(configs['iterations'])
    iteration_progress = (100 - progress) / iterations
    for i in range(iterations):
        logging.info(f'Test iteration {i}')
        progress += iteration_progress * (6 / 10)
        windows['main'].evaluate_js(
            f"""
            window.update_progress({progress}, 'Iteration {i + 1}: Executing testcase on DUT');
            """
        )
        dut_run_test(
            os.path.join(configs['proj_dir'], 'asm_test', f'{configs["testcase"]}_{i}.o'),
            os.path.join(configs['dut_disasm_path'], 'test.S')
        )
        os.chdir(RISCV_DV_SCRIPTS)
        iss_csv = os.path.join(csv_dir, f'iss_csv_{i}.csv')
        progress += iteration_progress * (1 / 5)
        windows['main'].evaluate_js(
            f"""
            window.update_progress({progress}, 'Iteration {i + 1}: Generating ISS CSV');
            """
        )
        run_cmd([
            'python3', 'spike_log_to_trace_csv.py',
            '--log', os.path.join(configs["proj_dir"], 'spike_sim', f'{configs["testcase"]}_{i}.log'),
            '--csv', iss_csv
        ])
        logging.info('ISS CSV created')
        progress += iteration_progress * (1 / 5)
        windows['main'].evaluate_js(
            f"""
            window.update_progress({progress}, 'Iteration {i + 1}: Comparing results');
            """
        )
        run_cmd([
            'python3', 'instr_trace_compare.py',
            '--csv_file_1', iss_csv,
            '--csv_file_2', configs['dut_csv'],
            '--csv_name_1', 'ISS',
            '--csv_name_2', os.path.dirname(configs['dut_path']),
            '--log', os.path.join(compare_log_dir, f'comparison_{i}.log'),
            '--mismatch_print_limit', '100'
        ])
        logging.info('Comparison completed')
    windows['main'].evaluate_js(
        """
        window.update_progress(100, 'Testcase finished');
        """
    )

    print('END')
