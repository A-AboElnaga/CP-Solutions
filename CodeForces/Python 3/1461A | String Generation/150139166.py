for t in range(int(input())):
  n,k = list(map(int,str.split(input())))
  rslt ="a"*k
  c=3
  x="cba"
  while len(rslt) < n:
   rslt+=((n-len(rslt))//c)*x[:c:]
   c-=1
  print(rslt)
  