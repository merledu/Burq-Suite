import subprocess, time, json, os, \
    logging

from globals import configs, testlist, CORE_CFGS
from frontend.stderr import stderr, open_stderr_window


def dump_configs():
    configs['testlist'] = testlist
    os.chdir(configs['proj_path'])
    config_file = os.path.join(configs['proj_path'], 'configs.json')
    logging.info(f'Dumping configs: {config_file}')
    with open(config_file, 'w', encoding='UTF-8') as f:
        json.dump(configs, f)


def run_cmd(cmd, redirect_to_file=False, stdout_f=''):
    logging.debug(f'Command: {" ".join(cmd)}')
    if redirect_to_file:
        with open(stdout_f, 'w', encoding='UTF-8') as f:
            cmd_run = subprocess.run(cmd, text=True, stdout=f)
    else:
        print(cmd)
        cmd_run = subprocess.run(cmd, capture_output=True, text=True)
    if cmd_run.returncode:
        logging.info(cmd_run.returncode)
        logging.error(cmd_run.stderr)
        stderr['error'] = cmd_run.stderr
        stderr['halt_exec'] = True
        open_stderr_window()
        while stderr['halt_exec']:
            time.sleep(0.1)
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
    print(os.getcwd())
    run_cmd(configs['dut_cmd'].split())


def save_core_cfg(name, cfgs):
    cfg_file = os.path.join(CORE_CFGS, f'{name}.json')
    print(f'{cfgs = }')
    with open(cfg_file, 'w', encoding='utf-8') as f:
        json.dump(cfgs, f)


def get_core_cfgs():
    return [cfg[: -5] for cfg in os.listdir(CORE_CFGS)]


def load_core_cfg(name):
    cfg_file = os.path.join(CORE_CFGS, f'{name}.json')
    with open(cfg_file, 'r', encoding='utf-8') as f:
        cfg = json.load(f)
    return cfg

