import os
from globals import SELF_CHECKING_TESTS_ENV


def get_self_checking_tests_category():
    return [os.path.basename(f.path) for f in os.scandir(SELF_CHECKING_TESTS_ENV) if f.is_dir()]
    


if __name__ == '__main__':
    get_self_checking_tests_category()

