import os, logging


# Paths
HOME = os.environ['HOME']

BURQ_SUITE_ROOT = os.path.dirname(os.path.abspath(__file__))
BURQ_SUITE_LOGS = os.path.join(BURQ_SUITE_ROOT, 'logs')

IMAGE_ASSETS = os.path.join(BURQ_SUITE_ROOT, 'frontend', 'assets', 'images')

RISCV_DV_ENV = os.path.join(BURQ_SUITE_ROOT, 'riscv-dv')
RISCV_DV_ROOT = os.path.join(RISCV_DV_ENV, 'riscv-dv')

RISCV_ARCH_TEST_SUITE = os.path.join(BURQ_SUITE_ROOT, 'compliance', 'riscv-arch-test', 'riscv-test-suite')
RISCV_ARCH_TEST_ENV = os.path.join(RISCV_ARCH_TEST_SUITE, 'env')

TOOLS = os.path.join(BURQ_SUITE_ROOT, 'tools')
RISCV_GNU_TOOLCHAIN = os.path.join(TOOLS, 'riscv-gnu-toolchain', 'bin')
SPIKE = os.path.join(TOOLS, 'spike', 'bin')

CORE_CFGS = os.path.join(BURQ_SUITE_ROOT, 'cores')

SELF_CHECKING_TESTS_ROOT = os.path.join(BURQ_SUITE_ROOT, 'self_checking_tests')
SELF_CHECKING_TESTS_ENV = os.path.join(SELF_CHECKING_TESTS_ROOT, 'Self-Checking-Tests')

# Environment Variables
os.environ['RISCV_GCC'] = "/home/hassan/riscv-gnu-toolchain/build/bin/riscv32-unknown-elf-gcc"
os.environ['RISCV_OBJCOPY'] = "/home/hassan/riscv-gnu-toolchain/build/bin/riscv32-unknown-elf-objcopy"
os.environ['SPIKE_PATH'] = "/home/hassan/riscv-isa-sim/bin"
os.environ['PATH'] = RISCV_GNU_TOOLCHAIN + os.pathsep + os.environ['PATH']



debug = False
loglevel = logging.DEBUG if debug else logging.INFO
windows = {}
configs = {}
stderr = {}
testlist = []

