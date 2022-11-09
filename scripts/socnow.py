import requests as rq
from icecream import ic

def getConfigs(url, apiData):
    config = rq.get(url, data=apiData)
    ic(config)
