for t in range(int(input())):
  n,B,x,y = list(map(int,str.split(input())))
  ai=[0]
  c= B//x
  if c>n:
    c=n
  n-=c
  crnt= c*x
  summ= c*(c+1)*x//2
  for _ in range(n):
    if crnt +x >B:
      crnt -=y
      summ+=crnt
    else:
      crnt+=x
      summ+=crnt
  print(summ)
      
      
    