import math
for t in range(int(input())):
  n,x = list(map(int,str.split(input())))
  if n > 2:
    print(math.ceil((n-2)/x)+1)
  else:
    print(1)