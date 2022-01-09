import eel
from eel import init, start, expose


# Initializes the frontend
init('web')


# Create new file
@expose
def new_file(filename):
    with open(f"New Files Test/{filename}", 'x', encoding='UTF-8') as f:
        f.write('')


@expose
def open_file(filename):
    with open(f"New Files Test/{filename}", 'r', encoding='UTF-8') as f:
        content = f.read()
    return content

@expose
def displaywindow(): 
    eel.start('assets2/index.html' , size=(1024, 768), position=(0,0), port=8081)

@expose
def showSocConfig():
    eel.start('configScreens/configSoc.html' , size=(1024, 768), position=(0,0), port=8082)


def display(): pass


# Starts the program
start('mainPage/mainPage.html', port=8007)