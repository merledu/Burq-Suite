import os, logging


# Paths
HOME = os.environ['HOME']

BURQ_SUITE_ROOT = os.path.dirname(os.path.abspath(__file__))
BURQ_SUITE_LOGS = os.path.join(BURQ_SUITE_ROOT, 'logs')

IMAGE_ASSETS = os.path.join(BURQ_SUITE_ROOT, 'frontend', 'assets', 'images')

RISCV_DV_ENV = os.path.join(BURQ_SUITE_ROOT, 'riscv-dv')
RISCV_DV_ROOT = os.path.join(RISCV_DV_ENV, 'riscv-dv')

TOOLS = os.path.join(BURQ_SUITE_ROOT, 'tools')
RISCV32_GNU_TOOLCHAIN = os.path.join(TOOLS, 'riscv32-gnu-toolchain', 'bin')
RISCV64_GNU_TOOLCHAIN = os.path.join(TOOLS, 'riscv64-gnu-toolchain', 'bin')
SPIKE = os.path.join(TOOLS, 'spike', 'bin')

CORE_CFGS = os.path.join(BURQ_SUITE_ROOT, 'cores')

RISCV_ARCH_TEST_SUITE = os.path.join(BURQ_SUITE_ROOT, 'compliance', 'riscv-arch-test', 'riscv-test-suite')
RISCV_ARCH_TEST_ENV = os.path.join(RISCV_ARCH_TEST_SUITE, 'env')

SELF_CHECKING_TESTS_ROOT = os.path.join(BURQ_SUITE_ROOT, 'self_checking_tests')
SELF_CHECKING_TESTS_ENV = os.path.join(SELF_CHECKING_TESTS_ROOT, 'Self-Checking-Tests')

# Environment Variables
# os.environ['RISCV_GCC'] = os.path.join(RISCV_GNU_TOOLCHAIN, 'riscv64-unknown-elf-gcc')
# os.environ['RISCV_OBJCOPY'] = os.path.join(RISCV_GNU_TOOLCHAIN, 'riscv64-unknown-elf-objcopy')
os.environ['SPIKE_PATH'] = SPIKE
# os.environ['PATH'] = RISCV_GNU_TOOLCHAIN + os.pathsep + os.environ['PATH']


# Global Variables
debug = False
loglevel = logging.DEBUG if debug else logging.INFO
windows = {}
# configs = {}
configs = {'variant': '32'}
stderr = {}
testlist = []

