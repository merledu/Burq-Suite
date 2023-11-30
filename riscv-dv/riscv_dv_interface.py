import os, logging, sys, re, random, \
    yaml

from importlib import import_module
from icecream import ic

from main import RISCV_DV_ROOT

riscv_dv_lib = import_module('riscv-dv.riscv-dv.scripts.lib')


YAMLS          = os.path.join(RISCV_DV_ROOT, 'yaml')
SIMULATOR_YAML = os.path.join(YAMLS, 'simulator.yaml')
ISS_YAML       = os.path.join(YAMLS, 'iss.yaml')
TESTLIST_YAML  = os.path.join(YAMLS, 'base_testlist.yaml')
DEFAULTS       = {'SIMULATOR': 'pyflow',
                  'MABI'     : 'ilp32',
                  'TIMEOUT'  : 1200,
                  'ISS'      : 'spike'}


def get_testlist():
    testlist = riscv_dv_lib.read_yaml(TESTLIST_YAML)
    return [re.sub('_', ' ', test['test']) for test in testlist]


# def run_test(**configs):
#     output_dir   = riscv_dv_lib.create_output(configs['proj_path'], configs['noclean'])
#     testlist     = os.path.join(RISCV_DV_ROOT, 'target', configs['target'], 'testlist.yaml')
#     matched_list = []
#
#     riscv_dv_lib.process_regression_list(testlist, configs['test'], 1, matched_list, RISCV_DV_ROOT)
#
#     logging.info(f'Processing simulator setup file : {SIMULATOR_YAML}')
#     yaml_data      : list[dict[str, str]] = riscv_dv_lib.read_yaml(SIMULATOR_YAML)
#     sim_entry_found: bool                 = False
#     for entry in yaml_data:
#         if entry['tool'] == DEFAULTS['simulator']:
#             logging.info(f'Found matching simulator: {entry["tool"]}')
#             sim_entry_found = True
#             sim_cmd: str = entry['sim']['cmd']
#             break
#     if not sim_entry_found:
#         logging.error(f'Cannot find simulator {SIMULATOR}')
#         sys.exit(riscv_dv_lib.RET_FAIL)
#
#     sim_cmd = re.sub('<cwd>', RISCV_DV_ROOT, sim_cmd)
#     sim_cmd = re.sub('<sim_opts>', '', sim_cmd)
#
#     logging.info('Running RISC-V instruction generator')
#     # Generate tests from instruction generator
#     sim_seed: dict[str, str] = {}
#     for test in matched_list:
#         iterations: int = test['iterations']
#         logging.info(f'Generating {iterations} {test["test"]}')
#         if iterations > 0:
#             # TODO: Add CSR test support
#             if test['test'] == 'riscv_csr_test':
#                 pass
#             else:
#                 # TODO: Set these from frontend
#                 batch_cnt : int = 1
#                 batch_size: int = 0
#                 logging.info(f'Running {test["test"]} with {batch_cnt} batches')
#                 for i in range(batch_cnt):
#                     test_id: str = f'{test["test"]}_{i}'
#                     rand_seed: int = random.getrandbits(31)
#                     if i < batch_cnt - 1:
#                         test_cnt: int = batch_size
#                     else:
#                         test_cnt: int = iterations - i * batch_size
#                         sim_cmd : str = re.sub("<test_name>", test['gen_test'], sim_cmd)
#                         cmd: str = sim_cmd.rstrip() + \
#                             f' --num_of_tests={test_cnt}' + \
#                             f' --start_idx={i * batch_size}' + \
#                             f' --asm_file_name={os.path.join(output_dir, "asm_test", test["test"])}' + \
#                             f' --log_file_name={os.path.join(output_dir, f"sim_{test['test']}_{i}.log")} ' + \
#                             f' --target={configs["target"]} ' + \
#                             f' --gen_test={test["gen_test"]} ' + \
#                             f' --seed={rand_seed} '
#                     sim_seed[test_id] = str(rand_seed)
#                     if 'gen_opts' in test:
#                         test['gen_opts'] = re.sub('\+', '--', test['gen_opts'])
#                         cmd += test['gen_opts']
#                     if not re.search('c', configs['target']):
#                         cmd += '+disable_compressed_instr=1 '
#                     logging.info(f'Running {test["test"]}, batch {i + 1}/{batch_cnt}, test_cnt:{test_cnt}')
#                     riscv_dv_lib.run_cmd(cmd, DEFAULT_TIMEOUT)
#
#     if sim_seed:
#         with open(('{}/seed.yaml'.format(os.path.abspath(output_dir))), 'w') as outfile:
#             yaml.dump(sim_seed, outfile, default_flow_style = False)
#
#     # Compile the assembly program to ELF, convert to plain binary
#     for test in matched_list:
#         for i in range(iterations):
#             if 'no_gcc' in test and test['no_gcc'] == 1:
#                 continue
#             prefix: str = os.path.join(output_dir, 'asm_test', f'{test["test"]}_{i}')
#             asm     : str = prefix + '.S'
#             elf     : str = prefix + '.o'
#             binary  : str = prefix + '.bin'
#             test_isa: str = configs['target']
#             if not os.path.isfile(asm):
#                 logging.error(f'Cannot find assembly test: {asm}\n')
#                 sys.exit(riscv_dv_lib.RET_FAIL)
#             cmd: str = f'{riscv_dv_lib.get_env_var("RISCV_GCC")} -static -mcmodel=medany ' + \
#                        f'-fvisibility=hidden -nostdlib ' + \
#                        f'-nostartfiles {asm} ' + \
#                        f'-I{os.path.join(RISCV_DV_ROOT, "user_extension")} ' + \
#                        f'-T{os.path.join(RISCV_DV_ROOT, "scripts", "link.ld")} -o {elf} '
#             if 'gcc_opts' in test:
#                 cmd += test['gcc_opts']
#             if 'gen_opts' in test:
#                 # Disable compressed instruction
#                 if re.search('disable_compressed_instruction', test['gen_opts']):
#                     test_isa = re.sub('c', '', test_isa)
#             # If march/mabi is not defined in the test gcc_opts, use the default
#             # setting from the command line.
#             if not re.search('march', cmd):
#                 cmd += f' -march={test_isa}'
#             if not re.search('mabi', cmd):
#                 cmd += f' -mabi={MABI}'
#             logging.info('Compiling {asm}')
#             riscv_dv_lib.run_cmd_output(cmd.split())
#             # Convert the ELF to plain binary, used in RTL sim
#             logging.info(f'Converting to {binary}')
#             cmd: str = f'{riscv_dv_lib.get_env_var("RISCV_OBJCOPY")} -O binary {elf} {binary}'
#             riscv_dv_lib.run_cmd_output(cmd.split())
#
#     # Run ISS simulation
#     for iss in configs['iss']:
#         log_dir: str = os.path.join(output_dir, iss)
#         logging.info(f'Processing ISS setup file : {ISS_YAML}')
#         yaml_data = riscv_dv_lib.read_yaml(ISS_YAML)
#
#         yaml_dir: str = os.path.dirname(ISS_YAML)