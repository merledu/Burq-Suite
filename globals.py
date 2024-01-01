import os


# Paths
HOME = os.environ['HOME']

BURQ_SUITE_ROOT = os.path.dirname(os.path.abspath(__file__))
BURQ_SUITE_LOGS = os.path.join(BURQ_SUITE_ROOT, 'logs')

IMAGE_ASSETS = os.path.join(BURQ_SUITE_ROOT, 'frontend', 'assets', 'images')

RISCV_DV_ENV = os.path.join(BURQ_SUITE_ROOT, 'riscv-dv')
RISCV_DV_ROOT = os.path.join(RISCV_DV_ENV, 'riscv-dv')


# Environment Variables


# Utilities
windows = {}
configs = {}