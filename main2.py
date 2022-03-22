import eel 
from eel import init, start
from utils import getFileStructure      # file structure utility

if __name__ == '__main__':




    project_dir = "/home/mordok/mera_project"
    
    init('web')

    @eel.expose
    def getTheFileStrucuture():
        structure = getFileStructure(project_dir)
        eel.pakrKayLaoFiles(structure)

    start('index.html', mode='custom', cmdline_args=['node_modules/electron/dist/electron', '.'], port=8008)


