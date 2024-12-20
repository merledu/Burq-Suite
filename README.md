# Burq Suite (v2.0)


## Prerequisites

- Debian
```sh
sudo apt install python3-gi python3-gi-cairo gir1.2-gtk-3.0 gir1.2-webkit2-4.1 autoconf automake autotools-dev curl python3 python3-pip libmpc-dev libmpfr-dev libgmp-dev gawk build-essential bison flex texinfo gperf libtool patchutils bc zlib1g-dev libexpat-dev ninja-build git cmake libglib2.0-dev device-tree-compiler libboost-regex-dev libcairo2-dev libboost-all-dev libgirepository1.0-dev python3-venv
```
- Arch Linux
```sh
sudo pacman -S --needed webkit2gtk dtc boost-libs autoconf automake curl python3 libmpc mpfr gmp gawk base-devel bison flex texinfo gperf libtool patchutils bc zlib expat
```


## Setup

```sh
git clone --recurse-submodules https://github.com/merledu/Burq-Suite.git
cd Burq-Suite

# Create virtual environment and source it
python3 -m venv .venv
source .venv/bin/activate

# Install dependencies
pip install wheel pywebview pygobject

# Install riscv-dv dependencies
pip install -r riscv-dv/riscv-dv/requirements.txt

# Install RISCOF (compliance)
pip install git+https://github.com/riscv/riscof.git@d38859f85fe407bcacddd2efcd355ada4683aee4
cd compliance
riscof --verbose info arch-test --clone
cd ..

# Create directories
mkdir cores logs tools

# PATHS
BURQ_SUITE_ROOT=`pwd`
BURQ_SUITE_TOOLS="$BURQ_SUITE_ROOT/tools"
SPIKE="$BURQ_SUITE_TOOLS/spike"

# Install toolchain
cd ./tools
wget -O- -q https://github.com/riscv-collab/riscv-gnu-toolchain/releases/download/2023.03.14/riscv32-elf-ubuntu-20.04-nightly-2023.03.14-nightly.tar.gz | tar -xzf -
mv riscv riscv32-gnu-toolchain
wget -O- -q https://github.com/riscv-collab/riscv-gnu-toolchain/releases/download/2023.03.14/riscv64-elf-ubuntu-20.04-nightly-2023.03.14-nightly.tar.gz | tar -xzf -
mv riscv riscv64-gnu-toolchain
cd ..

# Install spike
cd ./tools_submodules/riscv-isa-sim
mkdir build
cd build
../configure --prefix=$SPIKE
make
make install
cd ../../..
```


## Run
```sh
source .venv/bin/activate
python3 main.py
```


## TODOs
- [ ] Add support for commercial simulators compatible with riscv-dv
- [ ] Add support for other iss compatible with riscv-dv
- [ ] Add project tracking
- [ ] Add RISC-V compliance tests
