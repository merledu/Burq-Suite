import os, logging, sys, re

from types import ModuleType
from importlib import import_module
from icecream import ic

from main import RISCV_DV_ROOT

riscv_dv_lib: ModuleType = import_module('riscv-dv.riscv-dv.scripts.lib')
# riscv_dv_run: ModuleType = import_module('riscv-dv.riscv-dv.run')


SIMULATOR     : str = 'pyflow'
SIMULATOR_YAML: str = os.path.join(RISCV_DV_ROOT, 'yaml', 'simulator.yaml')
MABI          : str = 'ilp32'


def run_test(**configs) -> None:
    output_dir  : str       = riscv_dv_lib.create_output(configs['proj_path'], configs['noclean'])
    testlist    : str       = os.path.join(RISCV_DV_ROOT, 'target', configs['target'], 'testlist.yaml')
    matched_list: list[str] = []

    riscv_dv_lib.process_regression_list(testlist, configs['test'], 1, matched_list, RISCV_DV_ROOT)

    logging.info('Processing simulator setup file : {}'.format(SIMULATOR_YAML))
    yaml_data      : list[dict[str, str]] = riscv_dv_lib.read_yaml(SIMULATOR_YAML)
    sim_entry_found: bool                 = False
    for entry in yaml_data:
        if entry['tool'] == SIMULATOR:
            logging.info('Found matching simulator: {}'.format(entry['tool']))
            sim_entry_found = True
            sim_cmd: str = entry['sim']['cmd']
            break
    if not sim_entry_found:
        logging.error('Cannot find simulator {}'.format(SIMULATOR))
        sys.exit(riscv_dv_lib.RET_FAIL)

    # seed_gen: riscv_dv_run.SeedGen = riscv_dv_run.SeedGen(None, None, None)

    sim_cmd = re.sub('<out>', os.path.abspath(output_dir), sim_cmd)
    sim_cmd = re.sub('<cwd>', RISCV_DV_ROOT, sim_cmd)
    sim_cmd = re.sub('<sim_opts>', '', sim_cmd)

    logging.info('Running RISC-V instruction generator')
    # ic(matched_list)
    for test in matched_list:
        iterations: int = test['iterations']
        logging.info('Generating {} {}'.format(iterations, test['test']))
        if iterations > 0:
            # TODO: Add CSR test support
            if test['test'] == 'riscv_csr_test':
                pass
            else:
                # TODO: Set these from frontend
                batch_cnt : int = 1
                batch_size: int = 0
                logging.info('Running {} with {} batches'.format(test['test'], batch_cnt))
                for i in range(batch_cnt):
                    test_id: str = f'{test["test"]}_{i}'
                    if i < batch_cnt - 1:
                        test_cnt: int = batch_size
                    else:
                        test_cnt: int = iterations - i * batch_size
                        sim_cmd = re.sub("<test_name>", test['gen_test'],
                                         sim_cmd)
                        cmd: str = sim_cmd.rstrip() + \
                                   (" --num_of_tests={}".format(test_cnt)) + \
                                   (" --start_idx={}".format(i * batch_size)) + \
                                   (" --asm_file_name={}/asm_test/{}".format(output_dir, test['test'])) + \
                                   (" --log_file_name={}/sim_{}_{}.log ".format(
                                       output_dir,
                                       test['test'], i)) + \
                                   (" --target=%s " % (configs['target'])) + \
                                   (" --gen_test=%s " % (test['gen_test'])) + \
                                   (" --seed={} ".format(rand_seed))