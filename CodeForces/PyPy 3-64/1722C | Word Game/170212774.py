from collections import Counter
 
for t in range(int(input())):
  dic={}
  n= int(input())
  p1= str.split(input())
  p2= str.split(input())
  p3= str.split(input())
  score=[0,0,0,0]
  c= Counter(p1+p2+p3)
  for _ in range(n):
    if c[p1[_]]==1:
      score[1]+=3
    elif c[p1[_]]==2:
      score[1]+=1
      
    if c[p2[_]]==1:
      score[2]+=3
    elif c[p2[_]]==2:
      score[2]+=1
      
    if c[p3[_]]==1:
      score[3]+=3
    elif c[p3[_]]==2:
      score[3]+=1
  print(*score[1::])