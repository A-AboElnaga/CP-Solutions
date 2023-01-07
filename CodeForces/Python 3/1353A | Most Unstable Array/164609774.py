for t in range(int(input())):
  n,m = list(str.split(input()))
  n,m= int(n),int(m)
  if n ==1:
    print(0)
  elif n <3:
    print(m)
  else:
    print(2*m)
    
  