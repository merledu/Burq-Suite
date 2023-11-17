import os

from configparser import ConfigParser
from icecream import ic


COMPLIANCE_ROOT: str = os.getcwd()


def create_config(ref: str, ref_plugin_dir: str) -> None:
    config: ConfigParser = ConfigParser()
    config.optionxform   = str

    # RISCOF configs
    config['RISCOF']: dict[str, str] = {
        'ReferencePlugin'    : ref,
        'ReferencePluginPath': ref_plugin_dir
    }

    # Reference configs
    config[f'{ref}']: dict[str, str] = {
        'pluginpath': f'{ref_plugin_dir}'
    }

    # Writing the .ini file
    with open(os.path.join(COMPLIANCE_ROOT, 'config.ini'), 'w', encoding='UTF-8') as config_file:
        config.write(config_file)

    return None


def main(debug: bool = False) -> None:
    if debug:
        ic(COMPLIANCE_ROOT)

    ref            : str = 'spike'
    ref_plugin_path: str = os.path.join(COMPLIANCE_ROOT, ref)

    create_config(ref, ref_plugin_path)

    return None


if __name__ == '__main__':
    main()