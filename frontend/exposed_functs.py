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
        get_dir,
        select_target,
        set_log_file,
        set_config,

        riscv_dv_interface.get_working_base_testlist,
        riscv_dv_interface.get_simulator_list,
        riscv_dv_interface.get_iss_list,
        riscv_dv_interface.run_riscv_dv_test
    )
