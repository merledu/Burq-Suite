from os import makedirs
from os.path import join
from configparser import ConfigParser

def mkdir_plugins(out, dut, ref):
    for path in (dut, ref):
        makedirs(join(out, f'riscof_{dut}', path, 'env'))

def dump_config_ini(conf):
    config = ConfigParser()
    config['RISCOF'] = {
        'ReferencePlugin': conf[]
    }
