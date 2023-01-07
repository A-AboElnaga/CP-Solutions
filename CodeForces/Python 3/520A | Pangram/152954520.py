n = int(input())
s= input()
if n <26:
  print('NO')
else:  
  rslt='YES'
  s=s.lower()
  for letter in "abcdefghijklmnopqrstuvwxyz":
    if letter not in s:
      rslt = 'NO'
      break
  print(rslt)
    
    