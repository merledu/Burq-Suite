from os.path import join
from argparse import ArgumentParser

from ruamel.yaml import YAML

from riscv_arch_test.riscv_arch_test import mkdir_plugins, dump_cfg_ini, dump_dut_yamls, cp_dut_link_ld
#from globals import (
#    BURQ_SUITE_LOGS,
#    LOGLEVEL,
#    DEBUG,
#    BURQ_SUITE_WEB,
#    WIDTH,
#    HEIGHT,
#    windows
#)
#from frontend.exposed_functs import expose

def parse_args():
    parser = ArgumentParser()
    parser.add_argument('conf', help = 'Input YAML config file path')
    return parser.parse_args()

def read_conf(conf):
    yaml = YAML(
        typ = 'safe',
        pure = True
    )
    with open(conf) as f:
        config = yaml.load(f)
    return config

if __name__ == '__main__':
    #logging.basicConfig(
    #    filename = os.path.join(BURQ_SUITE_LOGS, 'burq_suite.log'),
    #    filemode = 'w',
    #    format = '%(levelname)-8s %(filename)s %(message)s',
    #    level = LOGLEVEL
    #)
    #windows['main'] = webview.create_window(
    #    'Burq Suite',
    #    #os.path.join(BURQ_SUITE_WEB, 'splash.html'),
    #    os.path.join(BURQ_SUITE_WEB, 'index.html'),
    #    width = WIDTH,
    #    height = HEIGHT,
    #    min_size = (WIDTH, HEIGHT)
    #)
    #logging.info('Burq Suite started')
    #webview.start(
    #    expose, (windows['main'],),
    #    debug = DEBUG
    #)
    args = parse_args()
    conf = read_conf(args.conf)
    for k in conf['tests']:
        if k == 'riscv_arch_test':
            test = conf['tests']['riscv_arch_test']
            test_dir = join(
                conf['out'],
                f'{test['dut']['name']}_riscv_arch_test'
            )
            mkdir_plugins(
                test['dut']['name'],
                test['ref']['name'],
                test_dir
            )
            dump_cfg_ini(
                test['dut']['name'],
                test['ref']['name'],
                test_dir,
                test['dut']['target']
            )
            dump_dut_yamls(
                join(
                    test_dir,
                    test['dut']['name']
                ), {
                    'isa': test['isa'],
                    'platform': test['platform']
                }
            )
            cp_dut_link_ld(
                test['dut']['link_ld'],
                join(
                    test_dir,
                    test['dut']['name']
                )
            )
