import logging

from customtkinter import *

from frontend.widgets.title import Title
from frontend.widgets.page import Page
from frontend.pages.dut_menu import DUTMenu
from frontend.configs import HEIGHT


class Left(CTkFrame):
    def __init__(self, parent):
        super().__init__(parent)

        self.fg_color = '#17181A'

        self.configure(fg_color=self.fg_color)
        self.grid_columnconfigure(0, weight=1)
        self.grid_rowconfigure(0, weight=2)

        self.title = Title(self, logo='flash96.png', size=(96, 96), fg_color=self.fg_color)

        self.title.grid(row=0, column=0, sticky='nsew')


class Right(CTkFrame):
    def __init__(self, parent, root):
        super().__init__(parent)

        self.title_label    = CTkLabel(self, text='Login')
        self.username_entry = CTkEntry(self, placeholder_text='Username')
        self.passwd_entry   = CTkEntry(self, placeholder_text='Password',
                                       show='*')
        self.login_btn      = CTkButton(self, text='Login',
                                        command=self.login)
        # self.dut_menu_page  = DUTMenu(root)

        self.title_label.grid(row=0, column=0)
        self.username_entry.grid(row=1, column=0)
        self.passwd_entry.grid(row=2, column=0)
        self.login_btn.grid(row=3, column=0)

    def login(self):
        if (self.username_entry.get() == 'admin') and (self.passwd_entry.get() == 'admin'):
            logging.info('Logged in successfully')
            # self.dut_menu_page.show()
        else:
            logging.info('Incorrect username or password')


class Login(Page):
    def __init__(self, parent):
        super().__init__(parent)

        self.grid_columnconfigure(0, weight=2)
        self.grid_columnconfigure(1, weight=1)
        self.grid_rowconfigure(0, weight=1)

        self.frm_left  = Left(self)
        self.frm_right = Right(self, parent)

        self.frm_left.grid(row=0, column=0, padx=(0, 0), pady=(0, 0), sticky='nsew')
        self.frm_right.grid(row=0, column=1, padx=(0, 0), pady=(0, 0), sticky='nsew')