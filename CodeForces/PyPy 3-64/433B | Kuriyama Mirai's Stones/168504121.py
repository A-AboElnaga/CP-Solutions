n= int(input())
 
Vs= list(map(int,str.split(input())))
m=int(input())
 
Vs_s=sorted(Vs)
def pr_sum(lst):
  rslt=[]
  sm=0
  for _ in lst:
    sm+=_
    rslt.append(sm)
  return(rslt)
pr_Vs=pr_sum(Vs)
pr_Vs_s=pr_sum(Vs_s)
 
for _ in range (m):
  ty,l,r= list(map(int,str.split(input())))
  if ty==1 and l > 1:
    print(pr_Vs[r-1]-pr_Vs[l-2])
  elif ty==2 and l > 1:
    print(pr_Vs_s[r-1]-pr_Vs_s[l-2])
  elif ty==1:
    print(pr_Vs[r-1])
  else:
    print(pr_Vs_s[r-1])
 
  
  
 