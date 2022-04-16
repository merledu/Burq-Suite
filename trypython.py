import os
root="/home/mahnoor/Burq-Suite"               
filepaths = [os.path.join(root,i) for i in os.listdir(root)]
for path in filepaths:
    a=path.split("/")
    
    print(a[4])
   
   