from os import makedirs, sep
from os.path import join
from configparser import ConfigParser
from shutil import copyfile

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
            Name of reference. Valid values in RV_ARCH_TEST['plugins'] keys (except 'dut').
    Returns:
        None
    '''
    cfg = ConfigParser()
    cfg['RISCOF'] = {
        'DUTPlugin': RV_ARCH_TEST['plugins']['dut']['cls'],
        'DUTPluginPath': RV_ARCH_TEST['plugins']['dut']['path'],
        'ReferencePlugin': RV_ARCH_TEST['plugins'][ref]['cls'],
        'ReferencePluginPath': RV_ARCH_TEST['plugins'][ref]['path']
    }
    ispec = join(prj_dir, RV_ARCH_TEST['plugins']['dut']['isa'])
    pspec = join(prj_dir, RV_ARCH_TEST['plugins']['dut']['platform'])
    cfg[RV_ARCH_TEST['plugins']['dut']['cls']] = {
        'elf': dut['elf'],
        'elf_args': dut['elf_args'],
        'env': prj_dir,
        'name': dut['name'],
        'ispec': ispec,
        'link_ld': dut['link_ld'],
        'pspec': pspec,
        'timeout': dut['timeout']
    }
    cfg[RV_ARCH_TEST['plugins'][ref]['cls']] = {
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
            For information relating to RISCOF, see [here][1].
            [1]: https://riscv-config.readthedocs.io/en/stable/yaml-specs.html
            [2]: https://riscof.readthedocs.io/en/stable/inputs.html#yaml-specs
        prj_dir:
            Path string to project directory.
    Returns:
        None
    '''
    yaml = YAML(
        typ = 'safe',
        pure = True
    )
    yaml.default_flow_style = False
    for k in dut_yamls:
        with open(
            join(prj_dir, f'dut_{k}.yaml'),
            'w'
        ) as f:
            yaml.dump(dut_yamls[k], f)

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
