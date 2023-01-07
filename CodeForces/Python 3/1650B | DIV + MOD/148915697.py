for case in range(int(input())):
  l,r,a = list(map(int,str.split(input())))
  maxx = 0
  if ((r//a)*a) -1 >= l:
      maxx= max((r//a +(a-2),((r//a)+(r%a)))) 
  else:
      maxx =((r//a)+(r%a))
  print(maxx)