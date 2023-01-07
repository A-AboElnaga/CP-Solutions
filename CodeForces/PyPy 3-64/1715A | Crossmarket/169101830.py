for t in range(int(input())):
  n,m = list(map(int,str.split(input())))
  if n+m ==2:
    print(0)
  else:
    n-=1
    m-=1
    print(m+n+1+min(n,m))