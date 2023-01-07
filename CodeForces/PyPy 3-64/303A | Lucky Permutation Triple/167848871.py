n= int(input())
if n & 1 :
  a= [i for i in range(n)]
  b= [a[-1]]+a[:-1:]
  c=[a[-1]]+[_ for _ in range(1,n,2)]+[_1 for _1 in range(0,n-1,2)]
  print(*a)
  print(*b)
  print(*c)
else:
  print(-1)