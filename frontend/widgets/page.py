from customtkinter import *


class Page(CTkFrame):
    def __init__(self, parent):
        super().__init__(parent)

    def show(self):
        self.grid(row=0,
                  column=0)