from logging import getLogger
from os.path import exists, join
from os import remove

from riscof.pluginTemplate import pluginTemplate
from riscof.utils import load_yaml, makeUtil

logger = getLogger()

class dut(pluginTemplate):
    __model__ = None

    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)
        config = kwargs['config']
        self.__model__ = config['name']
        self.elf = config['elf']
        self.elf_args = config['elf_args']
        self.env = config['env']
        self.ispec = config['ispec']
        self.link_ld = config['link_ld']
        self.pspec = config['pspec']
        self.timeout = int(config['timeout'])

        self.work_dir = None
        #self.suite_dir = None
        #self.compile_cmd = None
        #self.xlen = None
        #self.abi = None
        #self.makefile = None

    def initialise(self, suite, work_dir, archtest_env):
        self.work_dir = work_dir
        #self.suite_dir = suite
        self.compile_cmd = ' '.join((
            'riscv{}-unknown-elf-gcc',
            '-march={}',
            '-mabi={}'
            '-static',
            '-mcmodel=medany',
            '-fvisibility=hidden',
            '-nostdlib',
            '-nostartfiles',
            '-g',
            f'-T {self.link_ld}',
            #f'-I {self.plugin_path}/env/',
            f'-I {self.model_test}',
            f'-I {archtest_env}',
            '-o {}',
            '{}',
            '{}'
        ))

    def build(self, isa_yaml, platform_yaml):
        ispec = load_yaml(isa_yaml)['hart0']
        self.xlen = str(max(ispec['supported_xlen']))
        self.abi = ''.join((
            '' if self.xlen == '64' else 'i',
            'lp',
            self.xlen,
            'd' if 'd' in self.isa \
                else 'f' if 'f' in self.isa \
                else ''
        ))

    def runTests(self, testList):
        self.makefile = join(self.work_dir, f'Makefile.{self.name[: -1]}')
        if exists(self.makefile):
            remove(self.makefile)
        make = makeUtil(f'make -k -j {self.num_jobs}', self.makefile)
        for testname in testList:
            testentry = testList[testname]
            test = testentry['test_path']
            test_dir = testentry['work_dir']
            elf = 'dut_test.elf'
            elf_path = join(test_dir, elf)
            sig_file = join(test_dir, self.name[: -1] + ".signature")
            compile_cmd = self.compile_cmd.format(
                self.xlen,
                testentry['isa'].lower(),
                self.abi,
                elf,
                f'-D{" -D".join(testentry["macros"])}',
                test
            )
            if self.target_run:
                sim_cmd = f'{self.dut_exe} {self.dut_cmd_args.format(elf_path, sig_file)}'
            else:
                sim_cmd = 'echo "NO RUN"'
            make.add_target(
                '; '.join((
                    f'@cd {testentry["work_dir"]}',
                    compile_cmd,
                    sim_cmd
                ))
            )
        make.execute_all(self.work_dir, self.timeout)
        if not self.target_run:
            raise SystemExit(0)
