# Create virtual environment and source it
python3 -m venv .venv
source .venv/bin/activate


# Install dependencies
pip install wheel pywebview pygobject


# Install riscv-dv dependencies
pip install -r riscv-dv/riscv-dv/requirements.txt


# Install RISCOF (compliance)
pip install git+https://github.com/riscv/riscof.git
mkdir compliance
cd compliance
riscof --verbose info arch-test --clone
cd ..


# Create directories
mkdir cores
mkdir logs
mkdir tools


# Debian specific packages
sudo apt install python3-gi python3-gi-cairo gir1.2-gtk-3.0 gir1.2-webkit2-4.1 autoconf automake autotools-dev curl python3 python3-pip libmpc-dev libmpfr-dev libgmp-dev gawk build-essential bison flex texinfo gperf libtool patchutils bc zlib1g-dev libexpat-dev ninja-build git cmake libglib2.0-dev device-tree-compiler libboost-regex-dev


# PATHS
BURQ_SUITE_ROOT=`pwd`
BURQ_SUITE_TOOLS="$BURQ_SUITE_ROOT/tools"
RISCV_GNU_TOOLCHAIN="$BURQ_SUITE_TOOLS/riscv-gnu-toolchain"
SPIKE="$BURQ_SUITE_TOOLS/spike"


# Install toolchain
cd ./tools_submodules/riscv-gnu-toolchain
./configure --prefix=$RISCV_GNU_TOOLCHAIN --enable-multilib
make
cd ../../


# Install spike
cd ./tools_submodules/riscv-isa-sim
mkdir build
cd build
../configure --prefix=$SPIKE --enable-commitlog
make
make install
cd ../../../

