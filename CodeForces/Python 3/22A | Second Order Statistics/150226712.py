n= int(input())
if n>1:
  a= sorted(map(int,str.split(input())),reverse=True)
  if a[0]!=a[-1]:
    c= a.index(a[-1])
    print(a[c-1])
  else:print('NO')
    
else: print('NO')