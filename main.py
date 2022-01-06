from eel import init, start, expose
from os import mkdir

# Initializes the frontend
init('web')


# Create new file
@expose
def new_file(filename):
    with open(f"New Files Test/{filename}", 'x', encoding='UTF-8') as f:
        f.write('')

@expose
def new_folder(foldername): pass

# Starts the program
start('mainPage/in.html')
