from importlib import import_module

from frontend.splash import *
from frontend.index import *
from frontend.configs import *
from frontend.config_menu import *

riscv_dv_interface = import_module('riscv-dv.riscv_dv_interface')


def expose(window):
    window.expose(
        open_login,
        select_proj_folder,
        open_dut_configs,
        get_dut_type,
        open_dut_menu,
        upload_dut,
        select_target,
        dump_dut_disasm,
        get_dut_cmd,
        get_log_dir,
        get_log_file,

        riscv_dv_interface.get_working_base_testlist,
        riscv_dv_interface.get_simulator_list
    )