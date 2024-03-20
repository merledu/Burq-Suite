import os
import subprocess
import webview
from frontend.frontend_functs import *
from frontend.tests import configs
from scripts.utils import *
import yaml

from globals import (
    configs,
    windows,
    RISCV_ARCH_TEST_SUITE,
    RISCV_ARCH_TEST_ENV
)

def run_command(cmd):
    subprocess.run(cmd, check=True)

 
def dut_yaml_setup(yaml_path, target):
    with open(yaml_path, 'r') as file:
        data = yaml.safe_load(file)
    
    if 'hart0' in data and 'ISA' in data['hart0']:
        data['hart0']['ISA'] = target
    
    with open(yaml_path, 'w') as file:
        yaml.safe_dump(data, file, sort_keys=False)

        
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


def compliance_run_test(progress_part, progress):
    dut = configs["dut_path"]
    os.chdir(dut)
    dut_name = os.path.basename(dut)
    progress += (4 / 10) * progress_part
    windows['main'].evaluate_js(
        f'''
        window.update_progress_bar({progress});
        '''
    )
    windows['main'].evaluate_js(
        f'''
        window.update_progress_label("Setting up Refrence Model and DUT");
        '''
    )
    run_command([
        "riscof", "setup", "--dutname=" + dut_name, "--refname=spike"
    ])
    # progress += (1 / 10) * progress_part
    # windows['main'].evaluate_js(
    #     f'''
    #     window.update_progress_bar({progress});
    #     '''
    # )
    # windows['main'].evaluate_js(
    #     f'''
    #     window.update_progress_label("Cloning Riscof Arch Test Suite");
    #     '''
    # )
    # run_command([
    #     "riscof", "--verbose", "info", "arch-test", "--clone"
    # ])
    progress += (3 / 10) * progress_part
    windows['main'].evaluate_js(
        f'''
        window.update_progress_bar({progress});
        '''
    )
    windows['main'].evaluate_js(
        f'''
        window.update_progress_label("Validating YAML file");
        '''
    )
    run_command([
        "riscof", "validateyaml", "--config=config.ini"
    ])
    progress += (1 / 10) * progress_part
    windows['main'].evaluate_js(
        f"""
        window.update_progress_bar({progress});
        """
    )
    windows['main'].evaluate_js(
        f"""
        window.update_progress_label("Generating Testlist");
        """
    )    
    run_command([
        "riscof", "testlist", "--config=config.ini", f"--suite={RISCV_ARCH_TEST_SUITE}", f"--env={RISCV_ARCH_TEST_ENV}"
    ])
    dut_temp_path = f'{dut_name}/riscof_{dut_name}.py'
    work_dir_string = "{testentry['work_dir']}"
    new_sim_cmd = f"bash {configs['dut_cmd']} {work_dir_string}"
    new_sim_cmd_line = f'''f"{new_sim_cmd}"'''
    dut_template_setup(dut_temp_path, new_sim_cmd_line)
    ref_temp_path= f'spike/riscof_spike.py'
    spike_cmd = "            execute += self.ref_exe + ' --isa={0} +signature={1} +signature-granularity=4 {2}'.format(self.isa, sig_file, elf)\n"
    ref_template_setup(ref_temp_path, spike_cmd)
    progress += (1 / 10) * progress_part
    windows['main'].evaluate_js(
        f"""
        window.update_progress_bar({progress});
        """
    )
    windows['main'].evaluate_js(
        f"""
        window.update_progress_label("Running Tests");
        """
    )
    run_command([
        "riscof", "--verbose", "info", "run", "--config", "./config.ini", "--suite", f"{RISCV_ARCH_TEST_SUITE}", "--env", f"{RISCV_ARCH_TEST_ENV}"
    ])
    
    return progress['progress']