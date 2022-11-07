import requests as rq

def getConfigs(url):
    config = rq.get(url)
