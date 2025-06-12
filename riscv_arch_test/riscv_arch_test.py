from os import makedirs, sep
from os.path import join
from configparser import ConfigParser
from shutil import copyfile

from ruamel.yaml import YAML

DUT_YAMLS = {
    'isa': '{}_isa.yaml',
    'platform': '{}_platform.yaml'
}
CFG_INI = 'config.ini'

def mkdir_plugins(dut, ref, out):
    '''
    Setup riscof test directory structure.
    Args:
        dut:
            Name of DUT.
        ref:
            Name of reference.
        out:
            Path to riscof test directory.
    Returns:
        None
    '''
    for plugin in (dut, ref):
        makedirs(join(out, plugin, 'env'))

def dump_cfg_ini(
    dut, ref, out,
    target_run = True
):
    '''
    Dump the `config.ini` file.
    Args:
        out:
            Path to riscof test directory.
        dut:
            Name of DUT.
        ref:
            Name of reference.
        target_run:
            Whether to execute the tests or not. Default: True
    Returns:
        None
    '''
    cfg = ConfigParser()
    cfg['RISCOF'] = {
        'ReferencePlugin': ref,
        'ReferencePluginPath': join(out, ref),
        'DUTPlugin': dut,
        'DUTPluginPath': join(out, dut)
    }
    cfg[dut] = {
        'pluginpath': cfg['RISCOF']['DUTPluginPath'],
        'ispec': DUT_YAMLS['isa'].format(
            join(cfg['RISCOF']['DUTPluginPath'], dut)
        ),
        'pspec': DUT_YAMLS['platform'].format(
            join(cfg['RISCOF']['DUTPluginPath'], dut)
        ),
        'target_run': target_run
    }
    cfg[ref] = {
        'pluginpath': cfg['RISCOF']['ReferencePluginPath']
    }
    with open(
        join(out, CFG_INI), 'w'
    ) as f:
        cfg.write(f)

def dump_dut_yaml(path, dut_yamls):
    '''
    Dump the DUT plugin YAML files.
    Args:
        path:
            DUT plugin path.
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
