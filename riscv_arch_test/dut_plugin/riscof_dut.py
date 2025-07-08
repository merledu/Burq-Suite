import os
import re
import shutil
import subprocess
import shlex
import random
import string
from string import Template
import sys

from logging import getLogger
from os.path import exists, join
from os import remove

from riscof.pluginTemplate import pluginTemplate
from riscof.utils import load_yaml, makeUtil
import riscof.constants as constants

from utils import RV_ARCH_TEST

logger = getLogger()

class dut(pluginTemplate):
    __model__ = None
    __version__ = None

    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)
        config = kwargs['config']
        self.__model__ = config.name
        self.dut_exe = config['PATH']
        self.num_jobs = str(config['jobs'])
        self.plugin_path = RV_ARCH_TEST['dut_plugin_dir']
        self.isa_spec = RV_ARCH_TEST['ispec']
        self.platform_spec = RV_ARCH_TEST['pspec']
        self.target_run = False if config['target_run'] == '0' \
            else True

        self.work_dir = None
        self.suite_dir = None
        self.compile_cmd = None
        self.xlen = None
        self.isa = None
        self.abi = None
        self.makefile = None

    def initialise(self, suite, work_dir, archtest_env):
        self.work_dir = work_dir
        self.suite_dir = suite
        self.compile_cmd = ' '.join((
            'riscv{0}-unknown-elf-gcc',
            '-march={1}',
            '-mabi={2}'
            '-static',
            '-mcmodel=medany',
            '-fvisibility=hidden',
            '-nostdlib',
            '-nostartfiles',
            '-g',
            f'-T {self.plugin_path}/env/link.ld',
            f'-I {self.plugin_path}/env/',
            f'-I {archtest_env}',
            '-o {3}',
            '{4}',  # compile macros
            '{5}'
        ))

    def build(self, isa_yaml, platform_yaml):
        ispec = load_yaml(isa_yaml)['hart0']
        self.xlen = str(max(ispec['supported_xlen']))
        self.isa = f'rv{self.xlen}'
        if "I" in ispec["ISA"]:
            self.isa += 'i'
        if "M" in ispec["ISA"]:
            self.isa += 'm'
        if "F" in ispec["ISA"]:
            self.isa += 'f'
        if "D" in ispec["ISA"]:
            self.isa += 'd'
        if "C" in ispec["ISA"]:
            self.isa += 'c'
        self.abi = ''.join((
            '' if self.xlen == '64' else 'i',
            'lp',
            self.xlen,
            'd' if 'd' in self.isa \
                else 'f' if 'f' in self.isa \
                else ''
        ))

    def runTests(self, testList):
        self.makefile = join(self.work_dir, f'Makefile.{self.name[:-1]}')
        if exists(self.makefile):
            remove(self.makefile)
        # create an instance the makeUtil class that we will use to create targets.
        make = makeUtil(makefilePath = join(self.work_dir, "Makefile." + self.name[:-1]))
        
        # set the make command that will be used. The num_jobs parameter was set in the __init__
        # function earlier
        make.makeCommand = 'make -k -j' + self.num_jobs
        
        # we will iterate over each entry in the testList. Each entry node will be refered to by the
        # variable testname.
        for testname in testList:
        
            # for each testname we get all its fields (as described by the testList format)
            testentry = testList[testname]
        
            # we capture the path to the assembly file of this test
            test = testentry['test_path']
        
            # capture the directory where the artifacts of this test will be dumped/created. RISCOF is
            # going to look into this directory for the signature files
            test_dir = testentry['work_dir']
        
            # name of the elf file after compilation of the test
            elf = 'my.elf'
        
            # name of the signature file as per requirement of RISCOF. RISCOF expects the signature to
            # be named as DUT-<dut-name>.signature. The below variable creates an absolute path of
            # signature file.
            sig_file = os.path.join(test_dir, self.name[:-1] + ".signature")
        
            # for each test there are specific compile macros that need to be enabled. The macros in
            # the testList node only contain the macros/values. For the gcc toolchain we need to
            # prefix with "-D". The following does precisely that.
            compile_macros= ' -D' + " -D".join(testentry['macros'])
        
            # substitute all variables in the compile command that we created in the initialize
            # function
            cmd = self.compile_cmd.format(testentry['isa'].lower(), self.xlen, test, elf, compile_macros)
        
	    # if the user wants to disable running the tests and only compile the tests, then
	    # the "else" clause is executed below assigning the sim command to simple no action
	    # echo statement.
            if self.target_run:
              # set up the simulation command. Template is for spike. Please change.
              simcmd = self.dut_exe + ' --isa={0} +signature={1} +signature-granularity=4 {2}'.format(self.isa, sig_file, elf)
            else:
              simcmd = 'echo "NO RUN"'
        
            # concatenate all commands that need to be executed within a make-target.
            execute = '@cd {0}; {1}; {2};'.format(testentry['work_dir'], cmd, simcmd)
        
            # create a target. The makeutil will create a target with the name "TARGET<num>" where num
            # starts from 0 and increments automatically for each new target that is added
            make.add_target(execute)
        
        # if you would like to exit the framework once the makefile generation is complete uncomment the
        # following line. Note this will prevent any signature checking or report generation.
        #raise SystemExit
        
        # once the make-targets are done and the makefile has been created, run all the targets in
        # parallel using the make command set above.
        make.execute_all(self.work_dir)
        
        # if target runs are not required then we simply exit as this point after running all
        # the makefile targets.
        if not self.target_run:
            raise SystemExit(0)

#The following is an alternate template that can be used instead of the above.
#The following template only uses shell commands to compile and run the tests.

#    def runTests(self, testList):
#
#      # we will iterate over each entry in the testList. Each entry node will be referred to by the
#      # variable testname.
#      for testname in testList:
#
#          logger.debug('Running Test: {0} on DUT'.format(testname))
#          # for each testname we get all its fields (as described by the testList format)
#          testentry = testList[testname]
#
#          # we capture the path to the assembly file of this test
#          test = testentry['test_path']
#
#          # capture the directory where the artifacts of this test will be dumped/created.
#          test_dir = testentry['work_dir']
#
#          # name of the elf file after compilation of the test
#          elf = 'my.elf'
#
#          # name of the signature file as per requirement of RISCOF. RISCOF expects the signature to
#          # be named as DUT-<dut-name>.signature. The below variable creates an absolute path of
#          # signature file.
#          sig_file = os.path.join(test_dir, self.name[:-1] + ".signature")
#
#          # for each test there are specific compile macros that need to be enabled. The macros in
#          # the testList node only contain the macros/values. For the gcc toolchain we need to
#          # prefix with "-D". The following does precisely that.
#          compile_macros= ' -D' + " -D".join(testentry['macros'])
#
#          # collect the march string required for the compiler
#          marchstr = testentry['isa'].lower()
#
#          # substitute all variables in the compile command that we created in the initialize
#          # function
#          cmd = self.compile_cmd.format(marchstr, self.xlen, test, elf, compile_macros)
#
#          # just a simple logger statement that shows up on the terminal
#          logger.debug('Compiling test: ' + test)
#
#          # the following command spawns a process to run the compile command. Note here, we are
#          # changing the directory for this command to that pointed by test_dir. If you would like
#          # the artifacts to be dumped else where change the test_dir variable to the path of your
#          # choice.
#          utils.shellCommand(cmd).run(cwd=test_dir)
#
#          # for debug purposes if you would like stop the DUT plugin after compilation, you can
#          # comment out the lines below and raise a SystemExit
#
#          if self.target_run:
#            # build the command for running the elf on the DUT. In this case we use spike and indicate
#            # the isa arg that we parsed in the build stage, elf filename and signature filename.
#            # Template is for spike. Please change for your DUT
#            execute = self.dut_exe + ' --isa={0} +signature={1} +signature-granularity=4 {2}'.format(self.isa, sig_file, elf)
#            logger.debug('Executing on Spike ' + execute)
#
#          # launch the execute command. Change the test_dir if required.
#          utils.shellCommand(execute).run(cwd=test_dir)
#
#          # post-processing steps can be added here in the template below
#          #postprocess = 'mv {0} temp.sig'.format(sig_file)'
#          #utils.shellCommand(postprocess).run(cwd=test_dir)
#
#      # if target runs are not required then we simply exit as this point after running all
#      # the makefile targets.
#      if not self.target_run:
#          raise SystemExit
