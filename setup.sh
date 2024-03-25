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

# Creating core environment
mkdir cores

# Create logging directory
mkdir logs