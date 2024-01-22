from scripts.utils import *


def dut_run_test(obj_path, disasm_dump_path):
    gen_disasm(obj_path, disasm_dump_path)
    os.chdir(configs['dut_path'])
    run_cmd(configs['dut_cmd'].split())
