import eel,os
from eel import init, start
from replacer import replacer
from reverter import reverter


if __name__ == '__main__':

    
    init('web')

    @eel.expose
    def stop_everything():
        replacer()
        os.system("./openMain.sh")
        # start('index.html', mode='custom', cmdline_args=['node_modules/electron/dist/electron', '.'], port=8005)


    @eel.expose                         # Expose this function to Javascript
    def say_hello_py(x):
        print('Hello from %s' % x)

    reverter()
    start('splash.html', mode='custom', cmdline_args=['node_modules/electron/dist/electron', '.'], port=8003)


