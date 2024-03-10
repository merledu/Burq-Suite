import os
import subprocess
import webview
from frontend.frontend_functs import *
from frontend.tests import configs
from scripts.utils import *
import yaml

def run_command(cmd):
    subprocess.run(cmd, check=True)
 
def ref_template_setup(file_path, cmd_line):
    replacement_line = f"{cmd_line}"

    with open(file_path, 'r') as file:
        lines = file.readlines()

    modified = False
    for i, line in enumerate(lines):
        if "            execute += self.ref_exe + ''" in line:
            lines[i] = replacement_line
            modified = True

    if modified:
        with open(file_path, 'w') as file:
            file.writelines(lines)
        
    
def dut_template_setup(file_path, new_sim_cmd_line):
    with open(file_path, 'r') as file:
        lines = file.readlines()
    
    for i, line in enumerate(lines):
        if 'simcmd =' in line:
            lines[i] = "            simcmd =" + new_sim_cmd_line + '\n'
            break  
        
    with open(file_path, 'w') as file:
        file.writelines(lines)

def compliance_run_test(**progress):
    dut = configs["dut_path"]
    os.chdir(dut)
    dut_name = os.path.basename(dut)
    run_command([
        "riscof", "setup", "--dutname=" + dut_name, "--refname=spike"
    ])
    logging.info('RISCOF DUT Setup Complete')
    progress['progress'] += (4 / 10) * progress['progress_part']
    windows['main'].evaluate_js(
        f'''
        window.update_progress_bar({progress["progress"]});
        '''
    )
    run_command([
        "riscof", "--verbose", "info", "arch-test", "--clone"
    ])
    logging.info("RISCOF Arch Test Suite Cloned")
    progress['progress'] += (1 / 10) * progress['progress_part']
    windows['main'].evaluate_js(
        f'''
        window.update_progress_bar({progress["progress"]});
        '''
    )
    run_command([
        "riscof", "validateyaml", "--config=config.ini"
    ])
    logging.info('RISCOF YAML Validation Complete')
    progress['progress'] += (3 / 10) * progress['progress_part']
    windows['main'].evaluate_js(
        f'''
        window.update_progress_bar({progress["progress"]});
        '''
    )
    run_command([
        "riscof", "testlist", "--config=config.ini", "--suite=riscv-arch-test/riscv-test-suite/", "--env=riscv-arch-test/riscv-test-suite/env"
    ])
    logging.info('RISCOF Testlist Generated')
    progress['progress'] += (1 / 10) * progress['progress_part']
    windows['main'].evaluate_js(
        f"""
        window.update_progress_bar({progress["progress"]});
        """
    )
    dut_temp_path = f'{dut_name}/riscof_{dut_name}.py'
    work_dir_string = "{testentry['work_dir']}"
    new_sim_cmd = f"bash {configs['dut_cmd']} {work_dir_string}"
    new_sim_cmd_line = f'''f"{new_sim_cmd}"'''
    dut_template_setup(dut_temp_path, new_sim_cmd_line)
    ref_temp_path= f'spike/riscof_spike.py'
    spike_cmd = "            execute += self.ref_exe + ' --isa={0} +signature={1} +signature-granularity=4 {2}'.format(self.isa, sig_file, elf)\n"
    ref_template_setup(ref_temp_path, spike_cmd)
    run_command([
        "riscof", "--verbose", "info", "run", "--config", "./config.ini", "--suite", "./riscv-arch-test/riscv-test-suite/rv32i_m", "--env", "./riscv-arch-test/riscv-test-suite/env"
    ])
    logging.info('RISCOF Testlist Generated')
    windows['main'].evaluate_js(
        f"""
        window.update_progress_bar({progress["progress"]});
        """
    )
    
    return progress['progress']