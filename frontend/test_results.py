from globals import *


def get_dut_name():
    return configs['dut_path'].split('/')[-1]


def get_iss():
    return configs['iss']
