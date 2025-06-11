from os import makedirs
from os.path import join
from configparser import ConfigParser
from ruamel.yaml import YAML

ISA_YAML = '{}_isa.yaml'
PLATFORM_YAML = '{}_platform.yaml'
CFG_INI = 'config.ini'

def mkdir_plugins(out, dut, ref):
    '''
    Setup riscof test directory structure.
    Args:
        out:
            Path to riscof test directory.
        dut:
            Name of DUT.
        ref:
            Name of reference.
    Returns:
        None
    '''
    for plugin in (dut, ref):
        makedirs(join(out, plugin, 'env'))

def dump_cfg_ini(out, dut, ref, target_run):
    '''
    Creates and generates the `config.ini` file.
    Args:
        out:
            Path to riscof test directory.
        dut:
            Name of DUT.
        ref:
            Name of reference.
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
        'ispec': ISA_YAML.format(
            join(cfg['RISCOF']['DUTPluginPath'], dut)
        ),
        'pspec': PLATFORM_YAML.format(
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

def dump_isa_yaml(conf):
    ispec = conf['ispec']
    yaml = YAML(
        typ = 'safe',
        pure = True
    )
    with open()
