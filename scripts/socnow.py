import os, \
    requests as req

from icecream import ic
from run_tests import run_dv_test_on_spike
from run import DV_ROOT
from API import routes


def run_tests_on_dv(
    coreID, testList, testType, projDir, projName
):
    
    projPath = '{0}/{1}'.format(projDir, projName)
    os.chdir(DV_ROOT)
    for test in testList:
        run_dv_test_on_spike(
            , test, 1, f'{projPath}/dv_out',
            f'{projPath}/dv_out/spike_sim/{test}.0.log',
            f'{projPath}/logs/spike_trace.csv'
        )
