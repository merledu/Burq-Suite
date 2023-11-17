import os
from jinja2 import Template
from compliance_setup import COMPLIANCE_ROOT


def create_dut_dir(dut: str) -> int:
    dut_dir_path: str = os.path.join(COMPLIANCE_ROOT, dut)

    if os.path.isdir(dut_dir_path):
        return -1
    else:
        os.mkdir(dut_dir_path)
        return 0


def create_dut_plugin(dut: str, version: str) -> None:
    template_plugin_path: str = os.path.join(COMPLIANCE_ROOT, 'riscof_dut_template.txt')

    with open(template_plugin_path, 'r', encoding='UTF-8') as f:
        template: str = f.read()

    plugin_code: Template = Template(template)

    with open()


def main(debug: bool = False) -> None:
    dut: str = 'nucleusrv'

    if create_dut_dir(dut) == -1:
        print('Directory already exists')




if __name__ == '__main__':
    main()