from customtkinter import *

from frontend.configs import WIDTH, HEIGHT


class Page(CTkFrame):
    def __init__(self, parent):
        super().__init__(parent, width=WIDTH, height=HEIGHT, border_width=0)

    def show(self):
        self.grid(row=0, column=0, sticky='nsew')