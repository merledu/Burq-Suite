rom eel import init, start, expose

# Initializes the frontend
init('web')


# Create new file
@expose
def display(): 
    start('assets2/index.html' ,size=(1000, 700))