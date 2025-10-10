from configparser import ConfigParser
from os import makedirs, sep
from os.path import join
from shutil import copyfile
from subprocess import run

from riscv_config.checker import check_isa_specs
from riscv_config.errors import ValidationError
from ruamel.yaml import YAML

from utils import RV_ARCH_TEST

def gen_cfg_ini(dut, prj_dir, ref):
    '''
    Generate a project specific `config.ini` file.
    Args:
        dut:
            Dictionary with the following fields.
            - elf[str]: DUT simulation ELF path.
            - elf_args[str]: DUT simulation ELF arguments.
            - name[str]: Name of DUT.
            - link_ld[str]: Path to the DUT linker script.
            - timeout[int]: DUT simulation timeout.
        prj_dir:
            Path string to project directory.
        ref:
            Name string of reference. Valid values in RV_ARCH_TEST['plugins'] keys (except 'dut'), found in utils.py.
    Returns:
        None
    '''
    cfg = ConfigParser()
    dut_plugin = RV_ARCH_TEST['plugins']['dut']
    ref_plugin = RV_ARCH_TEST['plugins'][ref]
    cfg['RISCOF'] = {
        'DUTPlugin': dut_plugin['cls'],
        'DUTPluginPath': dut_plugin['path'],
        'ReferencePlugin': ref_plugin['cls'],
        'ReferencePluginPath': ref_plugin['path']
    }
    ispec = join(prj_dir, dut_plugin['isa'])
    pspec = join(prj_dir, dut_plugin['platform'])
    cfg[dut_plugin['cls']] = {
        'elf': dut['elf'],
        'elf_args': dut['elf_args'],
        'env': prj_dir,
        'name': dut['name'],
        'ispec': ispec,
        'link_ld': dut['link_ld'],
        'pspec': pspec,
        'timeout': dut['timeout']
    }
    cfg[ref_plugin['cls']] = {
        'pluginpath': cfg['RISCOF']['ReferencePluginPath']
    }
    with open(
        join(prj_dir, RV_ARCH_TEST['cfg']), 'w'
    ) as f:
        cfg.write(f)

def gen_dut_yaml(dut_yamls, prj_dir):
    '''
    Generate project specific DUT plugin YAML files.
    Args:
        dut_yamls:
            Dictionary containing the following fields.
            - isa[dict]: Dictionary with the schema of `dut_isa.yaml`.
            - platform[dict]: Dictionary with the schema of `dut_platform.yaml`.
            Schema for `dut_isa.yaml` and `dut_platform.yaml` are described in [RISCV-Config][1].
            For information relating to RISCOF, see [here][2].
            [1]: https://riscv-config.readthedocs.io/en/stable/yaml-specs.html
            [2]: https://riscof.readthedocs.io/en/stable/inputs.html#yaml-specs
        prj_dir:
            Path string to project directory.
    Returns:
        return_code:
            One of two int values.
            - 0: Indicates successful validation and generation of YAML files.
            - 1: Indicates failed validation and generation of YAML files.
        error_msg:
            A string containing error message if `return_code == 1`. Otherwise, None.
    '''
    yaml = YAML(
        typ = 'safe',
        pure = True
    )
    yaml.default_flow_style = False
    yaml_paths = {
        k: join(prj_dir, f'dut_{k}.yaml')
        for k in dut_yamls
    }
    for k in dut_yamls:
        with open(yaml_paths[k], 'w') as f:
            yaml.dump(dut_yamls[k], f)
    try:
        check_isa_specs(yaml_paths['isa'])
    except ValidationError as error_msg:
        return error_msg

def gen_dut_link_ld(link_ld, prj_dir):
    '''
    Generate DUT link.ld with the provided format.
    Args:
        link_ld:
            Full file path of DUT link.ld script.
        dest:
            DUT plugin path.
    Returns:
        None
    '''
