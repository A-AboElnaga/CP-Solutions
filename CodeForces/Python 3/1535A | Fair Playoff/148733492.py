for t in range(int(input())):
  s1,s2,s3,s4 = list(map(int,str.split(input())))
 
  if max(s1,s2) > min(s3,s4) and min(s1,s2) < max(s3,s4):
    print('YES')
  else:
    print('NO')