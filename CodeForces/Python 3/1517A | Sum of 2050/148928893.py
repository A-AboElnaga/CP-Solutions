for t in range(int(input())):
  n = int(input())
  x =0
  while n>=2050:
    if n >=(2050*10**(len(str(n))-4)):
     x+= n//(2050*10**(len(str(n))-4))
     n = n%(2050*10**(len(str(n))-4))
    else:
      x+= n//(2050*10**(len(str(n))-5))
      n = n%(2050*10**(len(str(n))-5))
  if x == 0 or n !=0:
    print(-1)
  else:
    print(int(x))
     
    
    
    