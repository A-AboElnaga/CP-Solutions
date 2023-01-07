for t in range(int(input())):
  s = input()
  if 'E' not in s or 'N' not in s:
    print('YES')
  else:
    if (s.count('N')>1) :
      print('YES')
    else: 
      print('NO')
 
    
      