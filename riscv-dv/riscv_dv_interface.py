from importlib import import_module

from scripts.utils import *

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


def riscv_dv_run_test(test, test_num, **progress):
    os.chdir(RISCV_DV_ROOT)
    test_dir = os.path.join(configs['proj_path'], f'riscv_dv_out_{test_num}')
    run_cmd([
        'python3', 'run.py',
        f'--target', configs['target'],
        f'--output', test_dir,
        f'--testlist', TESTLIST_YAML,
        f'--test', test,
        f'--iterations', ITERATIONS,
        f'--simulator', SIMULATOR,
        f'--iss', ISS
    ])
    logging.info(f'{testlist[test_num][1]} generated')
    progress['progress'] += (4 / 10) * progress['progress_part']
    windows['main'].evaluate_js(
        f'''
        window.update_progress_bar({progress["progress"]});
        '''
    )
    csv_dir = os.path.join(test_dir, 'csv')
    compare_log_dir = os.path.join(test_dir, 'compare_log')
    for folder in [csv_dir, compare_log_dir]:
        os.mkdir(folder)
    logging.info('CSV and comparison result directories created')
    progress['progress'] += (1 / 10) * progress['progress_part']
    windows['main'].evaluate_js(
        f'''
        window.update_progress_bar({progress["progress"]});
        '''
    )
    dut_run_test(
        os.path.join(test_dir, 'asm_test', f'{test}_0.o'),
        os.path.join(configs['dut_disasm_path'], 'test.S')
    )
    progress['progress'] += (3 / 10) * progress['progress_part']
    windows['main'].evaluate_js(
        f'''
        window.update_progress_bar({progress["progress"]});
        '''
    )
    iss_csv_path = os.path.join(csv_dir, 'iss.csv')
    create_iss_csv(ISS, iss_csv_path, os.path.join(test_dir, 'spike_sim', f'{test}_0.log'))
    progress['progress'] += (1 / 10) * progress['progress_part']
    windows['main'].evaluate_js(
        f"""
        window.update_progress_bar({progress["progress"]});
        """
    )
    compare_csv(iss_csv_path, os.path.join(compare_log_dir, 'compare.log'), os.path.dirname(configs['dut_path']))
    logging.info('Comparison completed')
    progress['progress'] += (1 / 10) * progress['progress_part']
    windows['main'].evaluate_js(
        f"""
        window.update_progress_bar({progress["progress"]});
        """
    )
    return progress['progress']
