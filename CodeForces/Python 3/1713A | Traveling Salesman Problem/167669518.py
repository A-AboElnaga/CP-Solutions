for t in range(int(input())):
    x=[]
    y=[]
    rslt = 0
    for bx in range(int(input())):
      c =list(map(int,str.split(input())))
      x.append(c[0])
      y.append(c[1])
    if max(x)>=0:  
      rslt+= max(x)*2 
    if max(y)>=0:
      rslt+= max(y)*2
    if min(x) < 0 :
      rslt+=abs(min(x))*2
    if min(y)< 0 :
      rslt+=abs(min(y))*2
    print(rslt)
      
      