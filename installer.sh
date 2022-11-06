#!/bin/bash
apt install nodejs npm

npm install

python3 -m venv venv
source ./venv/bin/activate
pip install -r ./requirements.txt

cd ./dv
pip install -r ./requirements.txt
cd ../
