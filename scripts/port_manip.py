import json


def throw_port_json(port):
    port = {'port': port}

    with open('port.json', 'w', encoding='UTF-8') as f:
        json.dump(port, f)
