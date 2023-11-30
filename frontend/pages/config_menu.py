import logging

from customtkinter import *

from frontend.widgets.folder_dialog import FolderDialog
from frontend.widgets.page import Page


class DUTCategory(CTkFrame):
    def __init__(self, parent):
        super().__init__(parent)

        self.title_label = CTkLabel(self, text='DUT Category')
        self.custom_dut  = CTkLabel(self, text='Custom DUT')

        self.title_label.grid(row=0,
                              column=0)
        self.custom_dut.grid(row=1,
                             column=0)


class Configs(CTkFrame):
    def __init__(self, parent):
        super().__init__(parent)

        self.configs = {}

        self.upload_custom_dut_label      = CTkLabel(self, text='Upload Custom DUT')
        self.upload_custom_dut_path_label = CTkLabel(self, text='')
        self.upload_custom_dut_btn        = CTkButton(self, text='Upload', command=self.locate_custom_dut)
        self.folder_dialog                = None

        self.upload_custom_dut_label.grid(row=0,
                                          column=0)
        self.upload_custom_dut_path_label.grid(row=1,
                                               column=0)
        self.upload_custom_dut_btn.grid(row=1,
                                        column=1)

    def locate_custom_dut(self):
        if self.folder_dialog is None or not self.folder_dialog.winfo_exists():
            self.folder_dialog = FolderDialog(self)
        else:
            self.folder_dialog.focus()
        self.configs['dut_path'] = self.folder_dialog.get()
        self.upload_custom_dut_path_label.configure(text=self.configs['dut_path'])
        logging.info(f'Selected custom DUT: {self.configs["dut_path"]}')


class ConfigMenu(Page):
    def __init__(self, parent):
        super().__init__(parent)

        self.dut_category_frame = DUTCategory(self)
        self.configs_frame      = Configs(self)

        self.dut_category_frame.grid(row=0,
                                     column=0)
        self.configs_frame.grid(row=0,
                                column=1)