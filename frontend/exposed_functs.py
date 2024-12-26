from importlib import import_module

from utils import save_core_cfg, get_core_cfgs, load_core_cfg
from frontend.splash import open_index#, login
from frontend.index import open_new_proj, select_proj_folder, open_proj, create_new_proj
from frontend.tests import (
    get_dut_type,
    open_dut_menu,
    get_dir, clear_testlist,
    remove_test,
    add_test,
    select_extension,
    select_variant,
    set_csv_file,
    set_config,
    zap_testlist,
    get_test_status_list,
    open_proj_browser
)
from self_checking_tests.self_checking_tests_interface import get_self_checking_tests_category, get_self_checking_testcases

riscv_dv_interface = import_module('riscv-dv.riscv_dv_interface')

def expose(window):
    window.expose(
        # utils
        save_core_cfg,
        get_core_cfgs,
        load_core_cfg,

        # splash
        open_index,
        # SoC-Now is not up yet, therefore skip login
        #login,

        # index
        open_new_proj,
        select_proj_folder,
        open_proj,
        create_new_proj,

        # tests
        get_dut_type,
        open_dut_menu,
        get_dir,
        clear_testlist,
        remove_test,
        add_test,
        select_extension,
        select_variant,
        set_csv_file,
        set_config,
        zap_testlist,
        get_test_status_list,
        open_proj_browser,

        # riscv_dv_interface
        riscv_dv_interface.get_working_base_testlist,
        
        # self_checking_tests
        get_self_checking_tests_category,
        get_self_checking_testcases
    )
