import os

BURQ_SUITE_ROOT: str = os.path.dirname(os.path.abspath(__file__))
BURQ_SUITE_LOGS: str = os.path.join(BURQ_SUITE_ROOT, 'logs')
RISCV_DV_ENV   : str = os.path.join(BURQ_SUITE_ROOT, 'riscv-dv')
RISCV_DV_ROOT  : str = os.path.join(RISCV_DV_ENV, 'riscv-dv')


def main() -> None:
    print('Hello world!')

    return None


if __name__ == '__main__':
    main()