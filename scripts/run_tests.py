import os, sys

from icecream import ic
from core_log_to_trace_csv import process_core_log
from spike_log_to_trace_csv import process_spike_sim_log
from utils import killSpike


def remove_csrs_from_spike_csv(spikeCSV, outCSV):
    with open(spikeCSV, 'r', encoding='UTF-8') as f:
        csvIn = f.readlines()
    
    with open(outCSV, 'w', encoding='UTF-8') as f:
        f.write(csvIn[0])
        for i in range(1, len(csvIn)):
            if 'csr' not in csvIn[i]:
                f.write(csvIn[i])


def run_dv_test_on_spike(
    extension, testName, iterations, outDir, spike_log,
    spike_csv, csr_enable=False
):
    # Run DV test and generate Spike log
    ic(extension, testName, iterations, outDir, spike_log,
       spike_csv)
    os.system(
        f'python3 run.py'
        f' --target {extension}'
        f' --simulator pyflow'
        f' --iss spike'
        f' --test {testName}'
        f' --iterations {iterations}'
        f' --output {outDir}'
    )
    killSpike()
    # Convert Spike log to csv
    process_spike_sim_log(spike_log, spike_csv)

    # Remove csr instructions if not supported
    if not csr_enable:
        remove_csrs_from_spike_csv(spike_csv, spike_csv)


def run_dv_test_on_core(
    core_log_gen_cmd, core_log, core_csv
):
    # Generate core log
    os.system(core_log_gen_cmd)

    # Generate core csv
    process_core_log(core_log, core_csv)


def run_c_test_on_spike(
    extension, testName, outDir, spike_log, spike_csv,
    csr_enable=False
):
    # Run C test and generate Spike log
    os.system(
        f'python3 run.py'
        f' --target {extension}'
        f' --simulator pyflow'
        f' --iss spike'
        f' --c_test {testName}'
        f' --output {outDir}'
    )
    killSpike()
    # Convert Spike log to csv
    process_spike_sim_log(spike_log, spike_csv)

    # Remove csr instructions if not supported
    if not csr_enable:
        remove_csrs_from_spike_csv(spike_csv, spike_csv)
