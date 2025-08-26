import json, os, logging, \
    subprocess as sp

from os.path import dirname, abspath, join

# Constants
BURQ_SUITE_ROOT = dirname(
    abspath(__file__)
)
RV_ARCH_TEST = {
    'interface': join(BURQ_SUITE_ROOT, 'riscv_arch_test')
}
RV_ARCH_TEST['riscv-arch-test'] = join(RV_ARCH_TEST['interface'], 'riscv-arch-test')
RV_ARCH_TEST['suite'] = join(RV_ARCH_TEST['riscv-arch-test'], 'riscv-test-suite')
RV_ARCH_TEST['env'] = join(RV_ARCH_TEST['suite'], 'env')
RV_ARCH_TEST['cfg'] = 'config.ini'
RV_ARCH_TEST['plugins'] = {
    'dut': {
        'cls': 'DUT',
        'path': join(RV_ARCH_TEST['interface'], 'dut_plugin'),
        'isa': 'dut_isa.yaml',
        'platform': 'dut_platform.yaml'
    },
    'sail': {
        'cls': 'Sail',
        'path': join(RV_ARCH_TEST['interface'], 'sail_plugin')
    },
    'spike': {
        'cls': 'Spike',
        'path': join(RV_ARCH_TEST['interface'], 'spike_plugin')
    }
}

def dump_configs():
    os.chdir(configs['proj_path'])
    config_file = os.path.join(configs['proj_path'], 'configs.json')
    logging.info(f'Dumping configs: {config_file}')
    with open(config_file, 'w', encoding='UTF-8') as f:
        json.dump(configs, f)
    os.chdir(BURQ_SUITE_ROOT)

def run_cmd(cmd, redirect_to_file=False, stdout_f=''):
    logging.debug(f'Command: {" ".join(cmd)}')
    if redirect_to_file:
        with open(stdout_f, 'w', encoding='UTF-8') as f:
            cmd_run = sp.run(cmd, text=True, stdout=f)
    else:
        cmd_run = sp.run(cmd, capture_output=True, text=True)
    if cmd_run.returncode:
        logging.info(cmd_run.returncode)
        logging.error(cmd_run.stderr)
    elif cmd_run.stderr:
        logging.error(cmd_run.stderr)
    else:
        logging.debug(cmd_run.stdout)

def gen_disasm(obj_path, dump_path):
    if configs['variant'] == '64':
        run_cmd(['riscv64-unknown-elf-objdump', '-d', obj_path], redirect_to_file=True, stdout_f=dump_path)
    else:
        run_cmd(['riscv32-unknown-elf-objdump', '-d', obj_path], redirect_to_file=True, stdout_f=dump_path)
    logging.info('Generated disassembly')

def dut_run_test(obj_path, disasm_dump_path):
    gen_disasm(obj_path, disasm_dump_path)
    os.chdir(configs['dut_path'])
    run_cmd(configs['dut_cmd'].split())

def save_core_cfg(name, cfgs):
    cfg_file = os.path.join(CORE_CFGS, f'{name}.json')
    with open(cfg_file, 'w') as f:
        json.dump(cfgs, f)

def get_core_cfgs():
    # cfg[: -5] for removing '.json' extension from file name
    return [cfg[: -5] for cfg in os.listdir(CORE_CFGS)]

def load_core_cfg(name):
    cfg_file = os.path.join(CORE_CFGS, f'{name}.json')
    with open(cfg_file) as f:
        cfg = json.load(f)
    return cfg
