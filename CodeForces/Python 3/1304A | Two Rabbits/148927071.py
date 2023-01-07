for t in range(int(input())):
   x,y,a,b = list(map(int,str.split(input())))
   z =abs(x-y)%(a+b)
   if z ==0:
     print(abs(x-y)//(a+b))
   else:
     print(-1)