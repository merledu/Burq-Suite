import os

from customtkinter import *
from pathlib import Path

from paths import HOME
from icecream import ic


class PathSelect(CTkFrame):
    def __init__(self, parent):
        super().__init__(parent)

        self.parent = parent

        # Elements
        self.path_label = CTkLabel(self, text=self.parent.folder)
        self.ascend_btn = CTkButton(self, text='..',
                                    command=self.ascend_level)

        # Structure
        self.path_label.grid(row=0,
                             column=0)
        self.ascend_btn.grid(row=0,
                             column=1)

    def ascend_level(self):
        self.parent.ascend_folder()
        self.path_label.configure(text=self.parent.folder)

    def configure(self, require_redraw=False, **kwargs):
        self.path_label.configure(text=kwargs['path_label_text'])

    def get(self):
        return self.path_label.cget('text')


class Folders(CTkScrollableFrame):
    def __init__(self, parent):
        super().__init__(parent)

        self.parent = parent

    def show(self):
        self.grid(row=0,
                  column=0)

        for i in range(len(self.parent.subdirs)):
            folder_btn = CTkButton(self, text=self.parent.subdirs[i],
                                   command=lambda index=i: self.descend_folder(index))
            folder_btn.grid(row=i,
                            column=0)

    def descend_folder(self, index):
        self.parent.descend_folder(index)


class FolderView(CTkFrame):
    def __init__(self, parent):
        super().__init__(parent)

        self.folder  = HOME
        self.subdirs = []
        self.folders = {}

        self.show_folders()

        self.path_select = PathSelect(self)

        self.path_select.grid(row=1,
                              column=0)

    def show_folders(self):
        self.subdirs              = next(os.walk(self.folder))[1]
        self.folders[self.folder] = Folders(self)

        self.folders[self.folder].show()

    def descend_folder(self, subdir_index):
        self.folder = os.path.join(self.folder, self.subdirs[subdir_index])
        self.show_folders()
        self.path_select.configure(path_label_text=self.folder)

    def ascend_folder(self):
        if len(self.folders) > 1:
            self.folders.pop(self.folder)
            self.folder = str(Path(self.folder).parent.absolute())
            self.show_folders()
        else:
            ic('Cannot go to root directories')

    def get(self):
        return self.path_select.path_label.cget('text')


class FolderDialog(CTkToplevel):
    def __init__(self, parent):
        super().__init__(parent)

        # Properties
        # self.geometry('900x1000')

        # Elements
        self.folder_view = FolderView(self)
        self.folder_select_btn = CTkButton(self, text='OK',
                                           command=self.destroy)

        # Structure
        self.folder_view.grid(row=0,
                              column=0)
        self.folder_select_btn.grid(row=1,
                                    column=0)

        return

    def get(self):
        self.wait_window()
        return self.folder_view.get()


if __name__ == '__main__':
    set_appearance_mode('dark')


    class App(CTk):
        def __init__(self):
            super().__init__()

            # self.geometry('900x600')

            self.folder_dialog = FolderDialog(self)
            print(self.folder_dialog.get())


    app = App()
    app.mainloop()