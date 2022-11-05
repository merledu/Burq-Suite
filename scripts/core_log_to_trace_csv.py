# Convert core log to the standard trace CSV format

import argparse
import os
import re
import sys
from icecream import ic

BURQ_ROOT = os.path.normpath(
    os.path.join(
        os.path.dirname(__file__),
        '../'
    )
)
DV_SCRIPTS = os.path.join(BURQ_ROOT, 'dv/scripts')
sys.path.insert(0, DV_SCRIPTS)

from riscv_trace_csv import (
    RiscvInstructionTraceCsv,
    RiscvInstructionTraceEntry,
)
from lib import gpr_to_abi
import logging
logger = logging.getLogger(__name__)


CORE_RE = re.compile(
    r'(?P<ClkCycle>\d+)\s+'
    r'(?P<pc_rdata>[a-f0-9]+)\s+'
    r'(?P<pc_wdata>[a-f0-9]+)\s+'
    r'(?P<insn>[a-f0-9]+)\s+'
    r'(?P<mode>\d+)\s+'
    r'(?P<rs1_addr>\d+)\s+'
    r'(?P<rs1_rdata>[0-9a-f]+)\s+'
    r'(?P<rs2_addr>\d+)\s+'
    r'(?P<rs2_rdata>[0-9a-f]+)\s+'
    r'(?P<rd_addr>\d+)\s+'
    r'(?P<rd_wdata>[0-9a-f]+)\s+'
    r'(?P<mem_addr>[0-9a-f]+)\s+'
    r'(?P<mem_rdata>[0-9a-f]+)\s+'
    r'(?P<mem_wdata>[0-9a-f]+)\s+'
    r'(?P<inst_str>[a-z]+.*)$'
)


def _process_core_log_fd(log_fd, csv_fd, full_trace=False):
    """Process core simulation log.

    Reads from log_fd, which should be a file object containing a trace from a
    core simulation. Writes in a standard CSV format to csv_fd, which should be
    a file object opened for writing.

    If full_trace is true, this dumps information about operands for, replacing
    absolute branch destinations with offsets relative to the current pc.

    """
    instr_cnt = 0

    trace_csv = RiscvInstructionTraceCsv(csv_fd)
    trace_csv.start_new_trace()

    trace_entry = None

    for line in log_fd:
        # Extract instruction information
        m = CORE_RE.match(line)
        # Stop at ecall instruction
        if re.search('ecall', line):
            trace_entry = RiscvInstructionTraceEntry()
            trace_entry.instr_str = m.group("inst_str")
            trace_entry.pc = m.group("pc_rdata")
            trace_entry.binary = m.group("insn")

            trace_csv.write_trace_entry(trace_entry)
            break

        if m is None or m.group("rd_addr") == '0':
            continue

        instr_cnt += 1
        # Write the extracted instruction to a csvcol buffer file
        trace_entry = RiscvInstructionTraceEntry()
        if "auipc" not in m.group("inst_str") and \
            "lui" not in m.group("inst_str") and \
                '0x' in m.group("inst_str"):
            trace_entry.instr_str = re.sub(
                "0x[a-f0-9]+",
                str(int(m.group("inst_str").split()[-1], 16)),
                m.group("inst_str")
            )
        else:
            trace_entry.instr_str = m.group("inst_str")
        trace_entry.pc = m.group("pc_rdata")
        trace_entry.binary = m.group("insn")
        trace_entry.mode = m.group("mode")
        #if full_trace:
        #    expand_trace_entry(trace_entry, m.group("instr").split()[1])

        abi_name = gpr_to_abi("x{}".format(m.group("rd_addr")))
        gpr_entry = "{}:{}".format(abi_name, m.group("rd_wdata"))
        trace_entry.gpr.append(gpr_entry)

        trace_csv.write_trace_entry(trace_entry)

    return instr_cnt


def process_core_log(core_log, csv, full_trace=False):
    """Process core simulation log.

    Extract instruction and affected register information from core
    log and save to a standard CSV format.
    """
    logging.info("Processing core log : %s" % core_log)
    try:
        with open(core_log, "r") as log_fd, open(csv, "w") as csv_fd:
            count = _process_core_log_fd(log_fd, csv_fd, full_trace)
    except FileNotFoundError:
        raise RuntimeError("Logfile %s not found" % core_log)

    logging.info("Processed instruction count : %d" % count)
    if not count:
        raise RuntimeError("No instructions in logfile: %s" % core_log)

    logging.info("CSV saved to : %s" % csv)


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--log", help="Input core simulation log", type=str)
    parser.add_argument("--csv", help="Output trace csv file", type=str)
    parser.add_argument("--full_trace", type=bool, default=False, help="Enable full log trace")

    args = parser.parse_args()

    process_core_log(args.log, args.csv, args.full_trace)


if __name__ == "__main__":
    main()