from customtkinter import *

from frontend.pages.login import Login
from frontend.configs import WIDTH, HEIGHT


set_appearance_mode('dark')


class BurqSuite(CTk):
    def __init__(self):
        super().__init__()

        self.geometry(f'{WIDTH}x{HEIGHT}')
        self.resizable(False, False)
        self.title('Burq Suite')
        self.grid_columnconfigure(0, weight=1)
        self.grid_rowconfigure(0, weight=1)

        self.login = Login(self)

        self.login.show()