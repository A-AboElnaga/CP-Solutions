# from math import floor
for t in range(int(input())):
  n= int(input())
  lst=[]
  r1= input()
  r2=input()
  st=True
  for _ in range(n):
    if (r1[_]==r2[_]) or (r1[_]=='G' and r2[_]=='B') or(r2[_]=='G' and r1[_]=='B'):
      continue 
    else:
      st= False
      break
  if st:
    print('YES')
  else:
    print('NO')