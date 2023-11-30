from customtkinter import *

from frontend.pages.login import Login


set_appearance_mode('dark')


class BurqSuite(CTk):
    def __init__(self):
        super().__init__()

        # self.attributes('-fullscreen', 'True')
        # self.geometry('1200x600')
        # self.grid_columnconfigure(0, weight=1)
        # self.resizable(False, False)

        self.login = Login(self)

        self.login.show()