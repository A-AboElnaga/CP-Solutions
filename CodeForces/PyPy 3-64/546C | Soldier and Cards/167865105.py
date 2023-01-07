n = int(input())
c= list(map(int,str.split(input())))
k1= c[0]
cards1= c[1::]
c= list(map(int,str.split(input())))
k2= c[0]
cards2= c[1::]
count = 0
while len(cards1)!=0 and len(cards2)!= 0 and count < 106:
    if cards2[0] > cards1[0]:
      cards2+=[cards1[0],cards2[0]]
      cards1.pop(0)
      cards2.pop(0)
    else:
      cards1+=[cards2[0],cards1[0]]
      cards2.pop(0)
      cards1.pop(0)
    count+=1
if len(cards1)==0:
  print(count,2)
elif len(cards2)==0:
  print(count,1)
else: 
 print(-1)
 