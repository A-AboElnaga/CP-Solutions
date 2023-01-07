for t in range(int(input())) :
  n1, n2, n3=list(map(int,str.split(input())))
  S =n1+n2+n3
  if S%3==0:
    print(0)
  else:print(1)