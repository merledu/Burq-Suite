import logging

from customtkinter import *

from frontend.widgets.title import Title
from frontend.widgets.page import Page
from frontend.pages.dut_menu import DUTMenu


class Left(CTkFrame):
    def __init__(self, parent):
        super().__init__(parent)

        # self.configure(fg_color=fg_color)

        self.title = Title(self, 'flash96.png', (96, 96))

        self.title.grid(row=0,
                        column=0)


class Right(CTkFrame):
    def __init__(self, parent, root):
        super().__init__(parent)

        self.title_label    = CTkLabel(self, text='Login')
        self.username_entry = CTkEntry(self, placeholder_text='Username')
        self.passwd_entry   = CTkEntry(self, placeholder_text='Password',
                                       show='*')
        self.login_btn      = CTkButton(self, text='Login',
                                        command=self.login)
        self.dut_menu_page  = DUTMenu(root)

        self.title_label.grid(row=0,
                              column=0)
        self.username_entry.grid(row=1,
                                 column=0)
        self.passwd_entry.grid(row=2,
                               column=0)
        self.login_btn.grid(row=3,
                            column=0)

    def login(self):
        if (self.username_entry.get() == 'admin') and (self.passwd_entry.get() == 'admin'):
            logging.info('Logged in successfully')
            self.dut_menu_page.show()
        else:
            logging.info('Incorrect username or password')


class Login(Page):
    def __init__(self, parent):
        super().__init__(parent)

        # self.fg_color: str = 'transparent'

        # self.grid_columnconfigure(0, weight=1)
        # self.grid_rowconfigure(0, weight=1)
        # self.configure(fg_color=self.fg_color)

        self.left_frame  = Left(self)
        self.right_frame = Right(self, parent)

        self.left_frame.grid(row=0,
                             column=0)
        self.right_frame.grid(row=0,
                              column=1)