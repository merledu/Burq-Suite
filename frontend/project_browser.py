import os, logging, \
    os.path as path

from globals import configs, windows

def return_to_index():
    logging.info('Returning to index')
    windows['main'].load_url('frontend/web/index.html')

def get_proj_name():
    return path.basename(configs['proj_path'])

def save_file(file, file_content):
    with open(file, 'w') as f:
        f.write(file_content)

def get_proj_path():
    return configs['proj_path']

def retrieve_dir_contents(root):
    dirpath, dirnames, filenames = next(os.walk(root))
    return {
        'dirnames': [
            path.join(dirpath, dirname)
            for dirname in dirnames
        ],
        'filenames': [
            path.join(dirpath, filename)
            for filename in filenames
        ]
    }

def show_file(file): pass
