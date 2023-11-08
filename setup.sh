# Create virtual environment and source it
python3 -m venv .venv
source .venv/bin/activate

# Install riscv-dv dependencies
cd riscv-dv || {
    echo "setup.sh must be executed from repo root"
    exit 1
}
pip3 install -r requirements.txt