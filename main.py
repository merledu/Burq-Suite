import eel 
from eel import init, start

if __name__ == '__main__':

    
    init('web')

    @eel.expose                         # Expose this function to Javascript
    def say_hello_py(x):
        print('Hello from %s' % x)

    
    start('splash.html', mode='custom', cmdline_args=['node_modules/electron/dist/electron', '.'], port=8002)


