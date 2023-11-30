import logging

from customtkinter import *

from frontend.widgets.page import Page
from frontend.widgets.folder_dialog import FolderDialog
from frontend.pages.custom_dut_configs.custom_dut import CustomDUTConfigs


class DUTCategory(CTkFrame):
    def __init__(self, parent, dut_menu):
        super().__init__(parent)

        self.dut_menu     = dut_menu

        self.title_label  = CTkLabel(self, text='DUT Category')
        self.custom_dut   = CTkLabel(self, text='Custom DUT')
        self.dut_menu_btn = CTkButton(self, text='<-',
                                      command=self.goto_dut_menu)

        self.dut_menu_btn.grid(row=0, column=0)
        self.title_label.grid(row=1, column=0)
        self.custom_dut.grid(row=2, column=0)

    def goto_dut_menu(self):
        self.dut_menu.show()


class Project(CTkFrame):
    def __init__(self, parent):
        super().__init__(parent)

        self.parent = parent

        self.project_path_label = CTkLabel(self, text='Project:')
        self.project_path       = CTkLabel(self, text='')
        self.project_btn        = CTkButton(self, text='...',
                                            command=self.locate_project_folder)
        self.project_dialog     = None

        self.project_path_label.grid(row=0, column=0)
        self.project_path.grid(row=0, column=1)
        self.project_btn.grid(row=0, column=2)

    def locate_project_folder(self):
        if self.project_dialog is None or not self.project_dialog.winfo_exists():
            self.project_dialog = FolderDialog(self)
        else:
            self.project_dialog.focus()
        self.parent.project_path = self.project_dialog.get()
        self.project_path.configure(text=self.parent.project_path)
        logging.info(f'Initialized project directory: {self.parent.project_path}')


class Configs(CTkFrame):
    def __init__(self, parent):
        super().__init__(parent)

        self.configs    = {}
        self.category   = None
        self.dut_config = None

        self.next_btn = CTkButton(self, text='->',
                                  command=self.next_config)
        self.prev_btn = CTkButton(self, text='<-')

        self.prev_btn.grid(row=1, column=0)
        self.next_btn.grid(row=1, column=1)

    def show(self):
        self.grid(row=1, column=1)
        if self.category == 0:
            self.dut_config = CustomDUTConfigs(self)
        self.dut_config.show()

    def configure(self, require_redraw=False, **kwargs):
        self.category = kwargs['category']

    def next_config(self):
        self.dut_config.next_config()


class ConfigMenu(Page):
    def __init__(self, parent, dut_menu):
        super().__init__(parent)

        self.project_path = None

        self.project            = Project(self)
        self.dut_category_frame = DUTCategory(self, dut_menu)
        self.configs_frame      = Configs(self)

        self.dut_category_frame.grid(row=0, column=0)
        self.project.grid(row=0, column=1)

    def set_category(self, category):
        self.configs_frame.configure(category=category)
        self.configs_frame.show()