from customtkinter import *

from frontend.widgets.config_frame import ConfigFrame


class DUTCMD(ConfigFrame):
    def __init__(self, parent):
        super().__init__(parent)

        self.descr_label   = CTkLabel(self, text='Enter the command to run compile and run and test on your DUT')
        self.dut_cmd_entry = CTkEntry(self)

        self.descr_label.grid(row=0, column=0)
        self.dut_cmd_entry.grid(row=1, column=0)

    def next_config(self):
        pass