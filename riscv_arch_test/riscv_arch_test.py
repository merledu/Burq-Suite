from os import makedirs, sep
from os.path import join
from configparser import ConfigParser
from shutil import copyfile

from ruamel.yaml import YAML

from utils import RV_ARCH_TEST

def gen_cfg_ini(prj_dir, dut, ref):
    '''
    Generate a project specific `config.ini` file.
    Args:
        prj_dir:
            Path string to project directory.
        dut:
            Dictionary with the following fields.
            - elf[str]: DUT simulation ELF path.
            - elf_args[str]: DUT simulation ELF arguments.
            - name[str]: Name of DUT.
            - link_ld[str]: Path to the DUT linker script.
            - timeout[int]: DUT simulation timeout.
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

def gen_dut_yaml():
    '''
    Generate project specific DUT plugin YAML files.
    Args:
        dut_yamls:
            Dictionary containing YAML inputs of `dut_isa.yaml` and `dut_platform.yaml`.
            The values of this dictionary needs to be a dictionary that may be read from YAML files
            or programmatically created and needs to contain the structure described in [RISCV-Config][2].
            For information relating to RISCOF, see [here][1].
            [1]: https://riscof.readthedocs.io/en/stable/inputs.html#yaml-specs
            [2]: https://riscv-config.readthedocs.io/en/stable/yaml-specs.html
            ```
            {
                'isa': {},
                'platform': {}
            }
            ```
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
            DUT_YAMLS[k].format(
                join(
                    path,
                    path.split(sep)[-1]
                )
            ), 'w'
        ) as f:
            yaml.dump(dut_yamls, f)

def cp_dut_link_ld(src, dest):
    '''
    Copy DUT link.ld script to DUT plugin directory.
    Args:
        src:
            Full file path of DUT link.ld script.
        dest:
            DUT plugin path.
    Returns:
        None
    '''
    copyfile(
        src,
        join(dest, 'env', 'link.ld')
    )
