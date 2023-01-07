from sys import stdin
input= stdin.readline
n,q,c = list(map(int,str.split(input())))
 
 
cs=[[[0]*101 for _ in range(101)] for _ in range(11)]
for line in range(n):
  x,y,s= map(int,input().split())
  cs[s][x][y] +=1
for i in range(1,101):
   for j in range(1,101):
            for k in range(11): 
              cs[k][i][j] += cs[k][i-1][j]+cs[k][i][j-1]-cs[k][i-1][j-1] 
for _ in range(q):
  rslt = 0
  ti,x1i,y1i,x2i,y2i = list(map(int,str.split(input())))
  for b in range(c+1):
    rslt += (b+ti)%(c+1)* (cs[b][x2i][y2i] -cs[b][x2i][y1i-1]-cs[b][x1i-1][y2i]+cs[b][x1i-1][y1i-1])
  print(rslt)