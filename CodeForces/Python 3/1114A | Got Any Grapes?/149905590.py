x, y, z = list(map(int,str.split(input())))
a, b, c = list(map(int,str.split(input())))
if a-x >=0 and a-x+b-y>=0 and a-x+b-y+c-z >=0:
  print('YES')
else:
  print('NO')