# Debian specific packages
sudo apt install python3-gi python3-gi-cairo gir1.2-gtk-3.0 gir1.2-webkit2-4.1 autoconf automake autotools-dev curl python3 python3-pip libmpc-dev libmpfr-dev libgmp-dev gawk build-essential bison flex texinfo gperf libtool patchutils bc zlib1g-dev libexpat-dev ninja-build git cmake libglib2.0-dev device-tree-compiler libboost-regex-dev libcairo2-dev libboost-all-dev libgirepository1.0-dev python3-venv


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
mkdir cores
mkdir logs
mkdir tools


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
../configure --prefix=$SPIKE --enable-commitlog
make
make install
cd ../../..

