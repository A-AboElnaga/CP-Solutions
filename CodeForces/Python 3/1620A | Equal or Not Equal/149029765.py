for t in range(int(input())):
  s = input()
  if 'E' not in s or 'N' not in s or s.count('N')>1:
    print('YES')
  else:
    if (s.count('N')>1)and s[-1] =='E' :
      print('YES')
 
    else: 
      print('NO')
 
    
      