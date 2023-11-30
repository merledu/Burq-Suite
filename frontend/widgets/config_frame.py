from customtkinter import *


class ConfigFrame(CTkFrame):
    def __init__(self, parent):
        super().__init__(parent)

        self.category = parent.category

    def show(self):
        self.grid(row=0, column=0)