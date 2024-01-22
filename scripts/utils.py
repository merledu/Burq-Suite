import subprocess, time, logging

from frontend.stderr import *


def run_cmd(cmd):
    cmd_run = subprocess.run(cmd, capture_output=True, text=True)
    if not cmd_run.returncode:
        logging.error(cmd_run.stderr)
        stderr['error'] = cmd_run.stderr
        stderr['halt_exec'] = True
        open_stderr_window()
        while stderr['halt_exec']:
            time.sleep(0.1)


def gen_disasm(obj_path, dump_path):
    logging.debug('Generating disassembly...')
    run_cmd(['riscv64-unknown-elf-objdump', '-d', obj_path, '>', dump_path])
    logging.info('Disassembly generated')
