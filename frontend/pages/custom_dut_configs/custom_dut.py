from customtkinter import *

from frontend.pages.custom_dut_configs.upload import UploadDUT
from frontend.pages.custom_dut_configs.isa_select import ISASelect
from frontend.pages.custom_dut_configs.test_run_cmd import DUTCMD


class CustomDUTConfigs(CTkFrame):
    def __init__(self, parent):
        super().__init__(parent)

        self.category                 = 'custom_dut'
        parent.configs[self.category] = {}
        self.configs                  = parent.configs[self.category]
        self.custom_dut_config_list   = [UploadDUT(self),
                                         ISASelect(self),
                                         DUTCMD(self)]

    def show(self):
        self.grid(row=0, column=0)
        self.custom_dut_config_list[0].show()

    def next_config(self):
        self.custom_dut_config_list[0].next_config()