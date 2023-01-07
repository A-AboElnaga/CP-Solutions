n = int(input())
home=[]
away=[]
rslt=0
for _ in range(n):
  h,a=list(map(int,str.split(input())))
  home.append(h)
  away.append(a)
for ho in home:
    rslt+=away.count(ho)
print(rslt)
    