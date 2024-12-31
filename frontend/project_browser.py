import os, logging, \
    os.path as path

from globals import configs, windows

def get_proj_path():
    return configs['proj_path']

def return_to_index():
    logging.info('Returning to index')
    windows['main'].load_url('frontend/web/index.html')

def get_proj_name():
    return path.basename(configs['proj_path'])

def save_file(file, file_content):
    with open(file, 'w') as f:
        f.write(file_content)

def create_dir(dir_path):
    try:
        os.mkdir(dir_path)
    except FileExistsError:
        pass

def create_file(file_path):
    open(file_path, 'w').close()

def get_file_content(file_path):
    with open(file_path) as f:
        content = f.read()
    return content

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
