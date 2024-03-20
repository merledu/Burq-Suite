import os
from pathlib import Path


def get_self_checking_tests_category():
    # folders = [f for f in Path('./Self-Checking-Tests').iterdir() if f.is_dir()]
    folders = [f for f in os.scandir('Self-Checking-Tests/') if f.is_dir()]
    print(f'{folders = }')


if __name__ == '__main__':
    get_self_checking_tests_category()

