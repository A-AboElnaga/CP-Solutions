for t in range(int(input())):
  x, y= list(map(int,str.split(input())))
  rslt =0
  c= (x**2+y**2)**0.5
  c2= (x**2+y**2)
  if x== 0 and y==0:
    print(0)
 
  elif c%1 ==0:
    print(1)
  else:
    print(2)
    
      
    