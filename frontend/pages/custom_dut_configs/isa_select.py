import logging

from customtkinter import *

from frontend.widgets.config_frame import ConfigFrame
from frontend.pages.custom_dut_configs.test_run_cmd import DUTCMD


class ISASelect(ConfigFrame):
    def __init__(self, parent):
        super().__init__(parent)

        self.isa_chkboxes = []

        self.isa_select_label = CTkLabel(self, text='Select Extensions')
        self.dut_cmd          = DUTCMD(parent)

        self.isa_select_label.grid(row=0, column=0)
        for i, ext in enumerate(['I (Integer)',
                                 'M (Multiply)',
                                 'A (Atomic)',
                                 'F (Single Precision Floating Point)',
                                 'D (Double Precision Floating Point)',
                                 'C (Compressed)']):
            self.isa_chkboxes.append(CTkCheckBox(self, text=ext))
            self.isa_chkboxes[i].grid(row=i + 1, column=0)

    def get(self):
        selected_isa = []
        for chkbox in self.isa_chkboxes:
            if chkbox.get() == 1:
                selected_isa.append(chkbox.cget('text')[0].lower())
        target = 'rv32i' + ''.join(selected_isa)
        logging.info(f'Selected custom DUT target: {target}')
        return target

    def next_config(self):
        self.dut_cmd.show()