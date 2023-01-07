for t in range(int(input())):
  a,b=list(map(int,str.split(input())))
  if a%b ==0:
    print(0)
  else:
    print(((1+a//b)*b)-a)