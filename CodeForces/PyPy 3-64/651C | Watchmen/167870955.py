from collections import Counter
 
x,y=[],[]
C=[]
n = int(input())
for _ in range(n):
  c= list(map(int,str.split(input())))
  x+=[c[0]]
  y+=[c[1]] 
  C+=[str(c)]
Xs=Counter(x)
Ys=Counter(y)
Cs=Counter(C)
pairs=0
for key in Xs:
  _x = Xs[key]
  pairs +=(_x*(_x-1)//2)
 
for key in Ys:
  _x = Ys[key]
  pairs +=(_x*(_x-1)//2)
  
for key in Cs:
   _x = Cs[key]
   pairs -=(_x*(_x-1)//2) 
 
print(pairs)