# from math import floor
for t in range(int(input())):
  n,m,sx,sy,d = list(map(int,str.split(input())))
  if ((abs(n-sx)+abs(m-sy))<= d) or (sx+d >=n and sx-d <=1) or (sy+d >=m and sy-d <=1) or (sy+d >=m and sx+d>=n ) or  (sy-d <=1 and sx-d<=1 )  :
    print(-1)
  else:
    print(abs(n-1)+abs(m-1))