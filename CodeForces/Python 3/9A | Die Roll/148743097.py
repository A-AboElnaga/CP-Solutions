a,b = list(map(int,(str.split(input()))))
 
c =(6-max(a,b)+1)
if c != 5 and c!= 0:
  for i in [6,3,2,1]:
    if c%i ==0:
      print(str(int(c/i))+"/"+str(int(6/i)))
      break
elif c==5:
  print(str(c)+"/6")
      
else: 
  print("0/1")
 
  
    
  
  