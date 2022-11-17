# Install node modules
npm install

# Create virtual environment and install dependencies
python3 -m venv venv
source ./venv/bin/activate
pip install -r ./requirements.txt

# Install riscv-dv dependencies
cd ./dv
git checkout master
pip install -r ./requirements.txt
cd ../
