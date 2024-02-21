import os, logging


# Paths
HOME = os.environ['HOME']

BURQ_SUITE_ROOT = os.path.dirname(os.path.abspath(__file__))
BURQ_SUITE_LOGS = os.path.join(BURQ_SUITE_ROOT, 'logs')

IMAGE_ASSETS = os.path.join(BURQ_SUITE_ROOT, 'frontend', 'assets', 'images')

RISCV_DV_ENV = os.path.join(BURQ_SUITE_ROOT, 'riscv-dv')
RISCV_DV_ROOT = os.path.join(RISCV_DV_ENV, 'riscv-dv')

TOOLS = os.path.join(BURQ_SUITE_ROOT, 'tools')
RISCV_GNU_TOOLCHAIN = os.path.join(TOOLS, 'riscv-gnu-toolchain', 'bin')
SPIKE = os.path.join(TOOLS, 'spike', 'bin')


# Environment Variables
os.environ['RISCV_GCC'] = os.path.join(RISCV_GNU_TOOLCHAIN, 'riscv64-unknown-elf-gcc')
os.environ['RISCV_OBJCOPY'] = os.path.join(RISCV_GNU_TOOLCHAIN, 'riscv64-unknown-elf-objcopy')
os.environ['SPIKE_PATH'] = SPIKE
os.environ['PATH'] = RISCV_GNU_TOOLCHAIN + os.pathsep + os.environ['PATH']


# Utilities
debug = True
loglevel = logging.DEBUG if debug else logging.INFO
windows = {}
configs = {}
stderr = {}
testlist = []

