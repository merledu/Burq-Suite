# Burq Suite (v2.0)

## Prerequisites
The following should be available on your `$PATH`
* [riscv-gnu-toolchain](https://github.com/riscv-collab/riscv-gnu-toolchain) (newlib binaries built with `--enable-multilib`)
* [spike](https://github.com/riscv-software-src/riscv-isa-sim) (built with `--enable-commitlog`)

## Setup
Clone the repo.
```shell
git clone --recurse-submodules <url>
cd <repo>
```
Run setup.
```shell
./setup.sh
```
Source created virtual environment.
```shell
source .venv/bin/activate
```
Setup compliance
```shell
cd compliance
python3 compliance_setup.py
```