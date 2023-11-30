from customtkinter import *
from PIL import Image

from paths import IMAGE_ASSETS


class Title(CTkFrame):
    def __init__(self, parent, **kwargs):
        super().__init__(parent)

        self.img_logo = CTkImage(dark_image=Image.open(os.path.join(IMAGE_ASSETS, kwargs['logo'])), size=kwargs['size'])
        self.lbl_logo = CTkLabel(self,
                                 image=self.img_logo,
                                 text='Burq Suite',
                                 text_color='#FFFFFF',
                                 width=kwargs['size'][0],
                                 height=kwargs['size'][1],
                                 corner_radius=0,
                                 fg_color=kwargs['fg_color'],
                                 compound='left')

        self.lbl_logo.grid(row=0, column=0, sticky='nsew')