import os

from configparser import ConfigParser
from icecream import ic
from shutil import rmtree


ROOT           : str = os.getcwd()
COMPLIANCE_ROOT: str = os.path.join(ROOT, 'compliance')


def create_config(ref: str, ref_plugin_dir: str, dut: str, dut_plugin_dir: str) -> None:
    config: ConfigParser = ConfigParser()
    config.optionxform   = str

    # RISCOF configs
    config['RISCOF']: dict[str, str] = {
        'ReferencePlugin'    : ref,
        'ReferencePluginPath': ref_plugin_dir,
        'DUTPlugin'          : dut,
        'DUTPluginPath'      : dut_plugin_dir
    }

    # DUT configs
    config[f'{dut}']: dict[str, str] = {
        'pluginpath': dut_plugin_dir,
        'ispec'     : os.path.join(dut_plugin_dir, f'{dut}_isa.yaml'),
        'pspec'     : os.path.join(dut_plugin_dir, f'{dut}_platform.yaml')
    }

    # Reference configs
    config[f'{ref}']: dict[str, str] = {
        'pluginpath': f'{ref_plugin_dir}'
    }

    # Writing the .ini file
    with open(os.path.join(COMPLIANCE_ROOT, 'config.ini'), 'w', encoding='UTF-8') as config_file:
        config.write(config_file)

    return None


def create_dut_plugin_env(dir_path: str) -> None:
    if os.path.isdir(dir_path):
        rmtree(dir_path)
    os.mkdir(dir_path)

    return None


def create_ref_plugin_env(ref: str) -> None:
    os.chdir(COMPLIANCE_ROOT)
    os.system(f'riscof setup --dutname=dut --refname={ref}')
    rmtree(os.path.join(COMPLIANCE_ROOT, 'dut'))

    return None


def main(debug: bool = False) -> None:
    if debug:
        ic(ROOT)
        ic(COMPLIANCE_ROOT)

    dut: str = 'nucleusrv'
    ref: str = 'spike'
    dut_plugin_path: str = os.path.join(COMPLIANCE_ROOT, dut)
    ref_plugin_path: str = os.path.join(COMPLIANCE_ROOT, ref)

    create_ref_plugin_env(ref)
    create_config(ref, ref_plugin_path, dut, dut_plugin_path)
    create_dut_plugin_env(dut_plugin_path)

    return None


if __name__ == '__main__':
    main(True)