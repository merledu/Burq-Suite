# Create virtual environment and source it
python3 -m venv .venv
source .venv/bin/activate

# Install RISCOF (compliance)
pip3 install wheel icecream
pip3 install git+https://github.com/riscv/riscof.git
cd compliance
riscof --verbose info arch-test --clone
cd ..

# Install riscv-dv dependencies
cd riscv_dv/riscv-dv
pip3 install -r requirements.txt
cd ../..

# Creating core environment
mkdir cores