from importlib import import_module

from frontend.splash import open_login
from frontend.index import open_new_proj, select_proj_folder, open_proj
from frontend.tests import get_dut_type, open_dut_menu, get_dir, clear_testlist, remove_test, \
                           add_test, select_target, set_csv_file, set_config, zap_testlist
from frontend.test_results import get_dut_name, get_iss
# from frontend.project_browser import *

riscv_dv_interface = import_module('riscv-dv.riscv_dv_interface')


def expose(window):
    window.expose(
        # splash.py
        open_login,

        # index.py
        open_new_proj,
        select_proj_folder,
        open_proj,

        # tests.py
        get_dut_type,
        open_dut_menu,
        get_dir,
        clear_testlist,
        remove_test,
        add_test,
        select_target,
        set_csv_file,
        set_config,
        zap_testlist,

        # test_results.py
        get_dut_name,
        get_iss,

        riscv_dv_interface.get_working_base_testlist,
        riscv_dv_interface.riscv_dv_run_test
    )

