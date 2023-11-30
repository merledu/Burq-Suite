import logging

from customtkinter import *

from frontend.widgets.title import Title
from frontend.widgets.page import Page
from frontend.pages.config_menu import ConfigMenu


class DUTMenu(Page):
    def __init__(self, parent):
        super().__init__(parent)

        self.title          = Title(self, 'flash.png', (64, 64))
        self.custom_dut_btn = CTkButton(self, text='Custom Core Verification',
                                        command=self.custom_dut_verification)
        self.config_menu    = ConfigMenu(parent, self)

        self.title.grid(row=0, column=0)
        self.custom_dut_btn.grid(row=1, column=0)

    def custom_dut_verification(self):
        logging.info('DUT selection: Custom DUT')
        self.config_menu.set_category(0)
        self.config_menu.show()