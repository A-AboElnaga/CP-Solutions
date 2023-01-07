for t in range(int(input())):
  n,k= list(map(int,str.split(input())))
  a = sorted(map(int,str.split(input())))
  rslt =0
  for i in range(1,n):
    rslt+=(k-a[i])//a[0]
  print(rslt)