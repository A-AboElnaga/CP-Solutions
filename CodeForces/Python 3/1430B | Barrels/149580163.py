for case in range(int(input())):
  n,k = list(map(int,str.split(input())))
  a   = list(map(int,str.split(input())))
  a.sort(reverse=True) 
  if a[0] == 0 :
    print(0)
  else:
    rslt = sum(a[:k+1:])
    print(rslt)