for t in range(int(input())):
 a,b= list(map(int,str.split(input())))
 diff = a-b
 if diff > 0:
   if diff%2==0:
     print(1)
   else:
     print(2)
 elif diff<0:
   if diff%2==0:
    print(2)
   else: print(1)
 else: print(0)