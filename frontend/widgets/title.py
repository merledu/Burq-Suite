from customtkinter import *
from PIL import Image

from paths import IMAGE_ASSETS


class Title(CTkFrame):
    def __init__(self, parent, logo: str, size: tuple[int, int]):
        super().__init__(parent)

        # self.fg_color: str = fg_color

        # Properties
        # self.configure(fg_color=self.fg_color)

        # Elements
        self.logo_img   : CTkImage = CTkImage(dark_image=Image.open(os.path.join(IMAGE_ASSETS, logo)),
                                              size=size)
        self.logo_label : CTkLabel = CTkLabel(self,
                                              image=self.logo_img,
                                              text='')
        self.title_label: CTkLabel = CTkLabel(self,
                                              text='Burq Suite',
                                              text_color='#FFFFFF')

        # Structure
        self.logo_label.grid(row=0, column=0)
        self.title_label.grid(row=0, column=1)