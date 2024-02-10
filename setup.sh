# Create virtual environment and source it
python3 -m venv .venv
source .venv/bin/activate

# Install dependencies
pip3 install wheel pywebview pygobject

# Install riscv-dv dependencies
pip3 install -r riscv-dv/riscv-dv/requirements.txt

# Install RISCOF (compliance)
# pip3 install git+https://github.com/riscv/riscof.git
# cd compliance
# riscof --verbose info arch-test --clone
# cd ..

# Creating core environment
mkdir cores

# Create logging directory
mkdir logs