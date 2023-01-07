for t in range(int(input())):
  n = int(input())
  a= sorted(map(int,str.split(input())))
  print(a[-1]+a[-2])