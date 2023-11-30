import logging

from customtkinter import *

from frontend.widgets.config_frame import ConfigFrame
from frontend.widgets.folder_dialog import FolderDialog
from frontend.pages.custom_dut_configs.isa_select import ISASelect


class UploadDUT(ConfigFrame):
    def __init__(self, parent):
        super().__init__(parent)

        self.parent = parent

        self.upload_custom_dut_label      = CTkLabel(self, text='Upload Custom DUT')
        self.upload_custom_dut_path_label = CTkLabel(self, text='')
        self.upload_custom_dut_btn        = CTkButton(self, text='Upload', command=self.locate_custom_dut)
        self.folder_dialog                = None
        self.isa_select                   = ISASelect(parent)

        self.upload_custom_dut_label.grid(row=0, column=0)
        self.upload_custom_dut_path_label.grid(row=1, column=0)
        self.upload_custom_dut_btn.grid(row=1, column=1)

    def locate_custom_dut(self):
        if self.folder_dialog is None or not self.folder_dialog.winfo_exists():
            self.folder_dialog = FolderDialog(self)
        else:
            self.folder_dialog.focus()
        self.parent.configs['dut_path'] = self.folder_dialog.get()
        self.upload_custom_dut_path_label.configure(text=self.parent.configs['dut_path'])
        logging.info(f'Selected custom DUT: {self.parent.configs["dut_path"]}')

    def next_config(self):
        self.isa_select.show()