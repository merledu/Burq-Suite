import ast

def getListOfCores(username):

    # implement the API req -> core/all

    dummy_resp = "[{'id': 2,'name': 'mycore2','isa': 32,'rtl': '/RTL.v','user': 'mahnoor'}]"

    return ast.literal_eval(dummy_resp)

def getCoreRTL(coreID):
    pass

print(getListOfCores("bn"))