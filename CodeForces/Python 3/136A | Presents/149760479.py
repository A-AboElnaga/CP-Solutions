n = int(input())
i = list(map(int,str.split(input())))
rslt = [0]*n
for _ in range(n):
  rslt[i[_]-1]= _+1 
  
for __ in range(n):
  print(rslt[__],end =" ")
print("")