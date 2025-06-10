from os import makedirs
from os.path import join
from configparser import ConfigParser

def mkdir_plugins(out, conf):
    plugin_paths = {}
    for plugin in conf:
        plugin_paths[plugin] = join(out, f'riscof_{conf[plugin]["name"]}', plugin)
        makedirs(join(plugin_paths[plugin], 'env'))
    return plugin_paths

def dump_config_ini(conf):
    config = ConfigParser()
    config['RISCOF'] = {
        'ReferencePlugin': conf['ref']['name'],
        'ReferencePluginPath': conf[]
    }
