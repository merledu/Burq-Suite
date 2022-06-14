import re
import os
import sys
def multiple_replace(abiname, text):
  
  regex = re.compile(r'[\s][x][0-9]+')
  
  
  
  
  return regex.sub(lambda mo: abiname[mo.string[mo.start():mo.end()]], text) 
 



def main():
    
    listt=[]
    abiname = {
" x0" : "zero",
" x1" : "ra",
" x2" : "sp"," x3":"gp"," x4":"tp"," x5":"t0"," x6":"t1"," x7":"t2"," x8":"s0/fp"," x9":"s1"," x10":"a0"," x11":"a1"," x12":"a2"," x13":"a3"," x14":"a4"," x15":"a5"," x16":"a6"," x17":"a7"," x18":"s2"," x19":"s3"," x20":"s4"," x21":"s5"," x22":"s6"," x23":"s7"," x24":"s8"," x25":"s9"," x26":"s10"," x27":"s11"," x28":"t3"," x29":"t4"," x30":"t5"," x31":"t6"
}
    ttext = open("add5new.txt","r")
    for text in ttext:
      new_text = multiple_replace(abiname, text)
      listt.append(new_text)
    with open("new1.txt", "w") as result:
      result.writelines(listt)
                
                

            
            #print (multiple_replace(abiname, text))
def add5data():
    data_list=[]
    #inputfile1=(input("ENTER FILE 1 NAME HERE"))
    inputfile1=sys.argv[1]
    while os.path.isfile(inputfile1) == False:
      new_inp = input("FILE 1 doesn't exists in the folder, please enter again: ")
      if os.path.isfile(new_inp) == True:
        inputfile1 = new_inp
        break
      
    with open (inputfile1,'r') as file1 :
       
            
        for f in file1:
            
            a=re.compile( r'[\s][8][a-zA-Z0-9_]+[\s]+[a-zA-Z0-9_]+')
            b=re.compile(r'[\s][a-zA-Z0-9_]+[\s]+[c][.][addi16sp]+[\s]+[0](.*\w)|[\s][a-zA-Z0-9_]+[\s]+[a-zA-Z0-9_.]+[\s]+[.][\s]+[-][\s]+[0]+(.*\w)|[\s][a-zA-Z0-9_]+[\s]+[a-zA-Z0-9_.]+[\s]+[x][0-9]+(.*\()|[\s][a-zA-Z0-9_]+[\s]+[a-zA-Z0-9_.]+[\s]+[0][x][0-9]+|[\s][a-zA-Z0-9_]+[\s]+[a-zA-Z0-9_.]+[\s]+[x][0-9]+[,](.*\w)|[\s][a-zA-Z0-9_]+[\s]+[a-zA-Z0-9_.]+[\s]+[x][0-9]+|[\s][a-zA-Z0-9_]+[\s]+[a-zA-Z0-9_.]+[\s]+[x][0-9]+(.*\w)|[\s][a-zA-Z0-9_]+[\s]+[a-zA-Z0-9_.]+[\s]+[-][a-zA-Z0-9_]+|[\s][a-zA-Z0-9_]+[\s]+[a-zA-Z0-9_.]+[\s]+[x][0-9]+[,][\s]+[.](.*\w)|[\s][a-zA-Z0-9_]+[\s]+[a-zA-Z0-9_.]+[\s]+[.][\s]+[+](.*\w)|[\s][a-zA-Z0-9_]+[\s]+[a-zA-Z0-9_.]+[\s]+[.][\s]+[+](.*\()|[\s][a-zA-Z0-9_]+[\s]+[a-zA-Z0-9_.]+[.][nop]+')
            i=(a.search(f))[0]
            ij=b.finditer(f)


            
            i=i.replace("[","")
            i=i.replace("(","")
            data_list.append(i)
            #print(i,end=" ")
            for jj in ij:
                oo=jj.group()
                oo=oo.replace("[","")
                oo=oo.replace("(","")
                
                data_list.append(oo)
                
                
                
                #print(oo)
            
    f= open("add5new.txt","w")
    l1=str(data_list)
    #print(l1)
    ui=0
    for i in range((len(data_list))//2):
        
        f.write(data_list[ui])
        f.write(data_list[ui+1]+'\n')
        ui+=2
    f.close()     
def execfiledata():
    
  data_list=[]
  ss=[]
  ss1=[]
  #inputfile2=(input("ENTER FILE 2 NAME HERE, EXEC FILE"))
  inputfile2=sys.argv[2]
  while os.path.isfile(inputfile2) == False:
    new_inp2 = input("FILE 2 doesn't exists in the folder, please enter again: ")
    if os.path.isfile(new_inp2) == True:
      inputfile2 = new_inp2
      break

  with open (inputfile2,'r') as file1 :   

          
      for f in file1:
        
        dd=re.compile(r'/(.*)/')
        de=(dd.match(f))
          
         
       # print(de,"hello")
          
        de1=str(de)
        if de1=="None":
          ss.append(f)
        else:
          
          dee=re.sub(de1," ",f)
        
       
           #r'^/[\s]+[A-Za-z]+[\s]+[:][\s]+[#][A-Za-z]+[\s]+[0][\s]+[A-Za-z]+[\s]+[A-Za-z]+[=][A-Za-z]+[\s]+[;][\s]+[A-Za-z]+[\s]')
        
        
  #print(ss)
  f1= open("execnew.txt","w")  
  for ss1 in ss:
    
    f1.write(ss1)
  #print("ii")  
  #print(ss,"o")
  f1.close()
  eelist=[]
  with open ("execnew.txt",'r') as file1 :
      for f in file1:
        i=re.compile(r'([\s][8][a-zA-Z0-9_]+)[\s]+([a-zA-Z0-9_]+)')
        a1=re.compile(r'[\s]+[;][\s]+[a-zA-Z0-9_.]+(.*\()|[\s]+[;][\s]+[a-zA-Z0-9_.]+(.*\[)|[=][a-zA-Z0-9_]+[\s]+[;][\s]+[a-zA-Z0-9_.]+(.*\()|[=][a-zA-Z0-9_]+[\s]+[;][\s]+[a-zA-Z0-9_.]+(.*\[)|[=][a-zA-Z0-9_]+[\s]+[;][\s]+[a-zA-Z0-9_.]+(.*\w)|[\s]+[;][\s]+[a-zA-Z0-9_.]+(.*\w)')
        

        a=i.finditer(f)
        
        a11=a1.finditer(f)
        a2=re.compile(r'[=][a-zA-Z0-9_]+[\s]+[;][\s]+[nbD]+')
        a22=a2.finditer(f)
        for e in a22:
          ee=e.group()
          eelist.append(ee)
        
          
          

          

          
        for ii in a:
            ii=ii.group()
            if ii in eelist:
              pass
            else:
              data_list.append(ii)
              #print(ii,end="")
        for j in a11:
            j=j.group()
            if j in eelist:
              pass
            else:
            
            
              #j=j.replace("="," ")
              #j=j.replace(","," ")
              #j=j.replace(";"," ")
              j=j.replace("("," ")
              j=j.replace("["," ")
              
              data_list.append(j)
              #print(j,"\n")
        
                
                     
        
  f= open("execnew.txt","w")
  l1=str(data_list)
  #print(l1)
  ui=0
  for i in range((len(data_list))//2):
      
      f.write(data_list[ui]+" ")
      f.write(data_list[ui+1]+'\n')
      
      
      ui+=2
  f.close()
 # print(eelist)
     
            
       
        

def comparison():
    file1 = open("new1.txt")
    file2 = open("execnew.txt")
    
    line_count = 0
    file2n=file2.readlines()
    line_count=len(file2n)
    #print(line_count)
      
    
    #print(line_count)
    fail=[]
    u=0
    v=0
    a=[]
    b=[]
    qq=[]
    qq1=[]
    nfflist=[]
    a1=[]
    a2=[]
    a3=[]
    a4=[]
    exec1 = [[0]*5 for i in range(line_count)]
    #print(exec1)
    ex=[]
    
    #ff2=open('new1.log','r')
  #  for nf in ff2:
   #   np=re.compile(r'[\s]([8][a-zA-Z0-9_]+)[\s]+([0-9]+)[\s]+([a-zA-Z0-9_]+)[\s]+([a-zA-Z0-9_.])+(.*\w)')
      
    #  nnp=np.finditer(nf)
     # f
      #  print(nnp,"ooo")
    #print("pre ff3")
    ff3=open('execnew.txt','r')
    
    for nff in ff3:

      
      np3=re.compile(r'[=][a-zA-Z0-9_]+|[\s][;]')
      
      nnp3=np3.search(nff)[0]
      nnp3=nnp3.replace("=","")
      nnp3=nnp3.replace(";","")
      ex.append(nnp3)
      #print("1")
      
      
      #print(nnp3)
   
        
      nff=re.sub("=","",nff)
      nff=re.sub(";","",nff)
      nfflist.append(nff)
    for i in range(0,len(ex)): ####################
        exec1[i][2]=ex[i]
    #print('exec1')
    ff4=open("execnew.txt","w")
    for inff in nfflist:
      ff4.write(inff)
    ff4.close()
    
    #print(exec1) 
    ff=open("execnew.txt","r")
    for fff in ff:
      hexe=re.compile(r'([8][a-zA-Z0-9_]+)[\s]+([a-zA-Z0-9_]+)')
      hexee=hexe.search(fff)[2]
      
      xxx=hexee
      aaa=int(xxx,16)
      hexee=str(hexee)
      aaa=str(aaa)
      repp=fff.replace(" "+hexee+" "," "+aaa+" ")
      qqq=qq.append(repp)
      #print(repp,"exc")
    
      
    ff=open('execnew.txt','w')
    
    ff.writelines(qq)
    ff.close()
    ff6=open("new1.txt","r")
    for fff6 in ff6:
      hexe6=re.compile(r'([8][a-zA-Z0-9_]+)[\s]+([a-zA-Z0-9_]+)')
      hexee6=hexe6.search(fff6)[2]
      
      xxx6=hexee6
      aaa6=int(xxx6,16)
      hexee6=str(hexee6)
      aaa6=str(aaa6)
      repp1=fff6.replace(" "+hexee6+" "," "+aaa6+" ")
      #print(hexee6,"h")
      qq1.append(repp1)
      #print(aaa6)
      #print(repp1)
    #print(qq1)
    
      
    ff6=open('new1.txt','w')
    
    ff6.writelines(qq1)
    ff6.close()
    
      
    
    #print(ex)
    #qe=len(ex)
    #
    #print(qe,"len")
    
    
      
    
      
      
      
    ff4=open('new1.txt','r')
    for nff4 in ff4:
      np4=re.compile(r'([8][a-zA-Z0-9_]+)[\s]+([0-9]+)[\s]+([a-zA-Z0-9_]+)[\s]+([c][.][addi16sp]+)+([\s])|([8][a-zA-Z0-9_]+)[\s]+([0-9]+)[\s]+([a-zA-Z0-9_]+)[\s]+([a-zA-Z0-9_.]+)[\s]+[.][\s]+([-])|([8][a-zA-Z0-9_]+)[\s]+([0-9]+)[\s]+([a-zA-Z0-9_]+)[\s]+([a-zA-Z0-9_.]+)[\s]+([a-zA-Z0-9_]+)|([8][a-zA-Z0-9_]+)[\s]+([a-zA-Z0-9_]+)[\s]+([a-zA-Z0-9_]+)[\s]+([a-zA-Z0-9_.]+)[\s]+[.][\s]+([+])|([8][a-zA-Z0-9_]+)[\s]+([a-zA-Z0-9_]+)[\s]+([a-zA-Z0-9_]+)[\s]+([a-zA-Z0-9_.]+)[\s]+([-][0])|([8][a-zA-Z0-9_]+)[\s]+([1])[\s]+([0]+)[\s]+([c.nop]+)')
      nnp4=np4.finditer(nff4)
      for iuo in nnp4:
        iuo=iuo.group(0)
        a=iuo.split()
        #print(a)
        a1.append(a)
    #print(a1)
    for y in a1:
      for t in y:
        if t=="-0":
          a=y.index(t)
          y[a]=" "
        else:
          pass
        if t=="+":
          a=y.index(t)
          y[a]=" "
        else:
          pass
        if t=="0x4":
          a=y.index(t)
          y[a]=" "
        else:
          pass
        if t=="-":
          a=y.index(t)
          y[a]=" "
        else:
          pass
        if t=="0x2":
          a=y.index(t)
          y[a]=" "
        else:
          pass
            
        
    #print(a1)
    ff5=open("execnew.txt","r")
    for f in ff5:
      aq=re.compile(r'([8][a-zA-Z0-9_]+)[\s]+([0-9]+)')
      aq1=re.compile(r'[a-zA-Z0-9_.]+[\s]+[a-zA-Z0-9_]+[,][\s]+[-]|[c][.][addi16sp]+[\s]|[a-zA-Z0-9_.]+[\s]+[a-zA-Z0-9_]+[,]|[a-zA-Z0-9_.]+[\s]+[r][a]+|[c][.][nop]+|[a-zA-Z0-9_.]+[\s]+[-]|[a-zA-Z0-9_.]+[\s]+[0][x]|[c][.][a-zA-Z0-9_.]+[\s]+[6][4]')
      aaq=aq.search(f)[1]
      aaq1=aq.search(f)[2]
      
      a2.append(aaq)
      a3.append(aaq1)
      aq2=aq1.finditer(f)
      for b in aq2:
        b=b.group()
        b=re.sub(",","",b)
      
        ao=b.split()
        a4.append(ao)
    
      
        
        
      
    h=0
    c=0
    for i in range(0,len(a2)):
        exec1[i][0]=a2[i]
    for j in range(0,len(a3)):
        exec1[j][1]=a3[j]
    
    for y in a4:
      for t in y:
        if t=="0x":
          a=y.index(t)
          y[a]=" "
        else:
          pass
        if t=="64":
          a=y.index(t)
          y[a]=" "
        else:
          pass
        if t=="-":
          a=y.index(t)
          y[a]=" "
        else:
          pass
        t=t.replace(",","")
    
    
    for r in a4:
    
      exec1[h][3]=r[0]
      h+=1
      try:
        exec1[c][4]=r[1]
        
        c+=1
        
    
      except IndexError:
        
        
        c+=1
        
        
        
        
    
      
    
    #print(len(a1),"a1")
    #print("*********")
    #print(exec1)
    vv=0
    uu=0
    e=0
    tot=0
    tp=0
    tf=0
    for fil, fil2 in zip(a1,exec1):
      passed=True
      e+=1
      for f,f1 in zip(fil,fil2):
        if f==f1 or f==" " or f1== " ":
          #lno=exec1.index(fil2)+1
          #print(lno,";",fil2,True)
          a=True
          vv+=1
        
        
          
         
         
        else:
          passed=False
          #print(a)
      if passed==False:
        
        #lno=exec1.index(fil2)+1
        #lno1=a1.index(fil)+1
        
        #print("\n","exec file",e,":",fil2,"\n","whisper filer",e,":",fil)
        f= ("EXEC FILE line no: {} exec file : {}").format(e,fil2)
        f=f.replace("[","")
        f=f.replace("]","")
        
        f1=("WHISPER FILE line no: {} whisper file : {}").format(e,fil)
        f1=f1.replace("[","")
        f1=f1.replace("]","")

        fail.append(f)
        fail.append(f1)
        
        tf+=1
      else:
        tp+=1
      tot+=1

    print("\n  ------------------------")
    print(" | Total Cycle | ",tot," |")
    print(" |-----------------------|")
    print(" | Total Pass  | ",tp, " |")
    print(" |-----------------------|")
    print(" | Total Fail  | ",tf, "     |")
    print("  ------------------------")
    
    
    #print(vv,"pass")
    #print(uu,"fail")
    #print(fail)

    if len(fail) > 0:
      with open('ERRORFILE.txt','w') as ff:
        for fy in fail:
      
          ff.write(fy+"\n")
    
        
    
      
print("****processing*****")
add5data()

execfiledata()

main()

comparison()
os.remove("execnew.txt")
os.remove("add5new.txt")

os.remove("new1.txt")

          

    
     
            
       
        
  
            
            
    
