import math
 
s = input(); rb,rs,rc = 0,0,0 
for i in s:
    if i == 'B':
        rb+=1
    elif i =='S':
        rs+=1
    else:
        rc+=1
        
   
nb, ns, nc= map(int, input().split())
pb, ps, pc= map(int, input().split())
r = int(input())
 
dct_price = {'B': pb, 'S': ps, 'C': pc}
dct_have = {'B': nb, 'S': ns, 'C': nc}
dct_reciepe = {'B': rb, 'S': rs, 'C': rc}
try:
  mb= nb/rb
except:
  mb=0
  dct_price.pop("B")
  dct_reciepe.pop("B")
  dct_have.pop("B")
try:
  ms= ns/rs
except:
  ms=0
  dct_price.pop("S")
  dct_reciepe.pop("S")
  dct_have.pop("S")
try:
  mc= nc/rc
except:
  mc=0
  dct_price.pop("C")
  dct_reciepe.pop("C")
  dct_have.pop("C")
 
mx_wExist=math.ceil(max(mb,ms,mc))
val= sum(((mx_wExist*dct_reciepe[k])-dct_have[k])*dct_price[k] for k in dct_price)
what_you_can_make_with_every_ing=[]
for k in dct_have:
  what_you_can_make_with_every_ing.append(dct_have[k]//dct_reciepe[k])
minToMakeWObuy= min(what_you_can_make_with_every_ing)
t= minToMakeWObuy
for k in dct_have:
  dct_have[k]-=minToMakeWObuy*dct_reciepe[k]
 
mx_wExist-=minToMakeWObuy
 
    
 
st=True
while max(dct_have.values()) >0 and r > 0 and st:
  for k in dct_reciepe:
    if (dct_have[k]-dct_reciepe[k]<0 and abs(dct_have[k]-dct_reciepe[k])*dct_price[k]<=r):
      r-= abs(dct_have[k]-dct_reciepe[k])*dct_price[k]
      dct_have[k] = 0
    elif (dct_have[k]-dct_reciepe[k])>=0:
      dct_have[k]-= dct_reciepe[k]
    else:
      st=False
      break
  if st:
    t+=1
    
t+= r//(sum(dct_price[i]*dct_reciepe[i] for i in dct_price))
 
print(t)
      
      
  
# if dct['B'][0] == 0:
#     dct.pop('B')
# if dct['S'][0] == 0:
#     dct.pop('S')
# if dct['C'][0] == 0:
#     dct.pop('C')
 
# c = min(dct[k][1]//dct[k][0] for k in dct)
# cost = 0
# for k in dct:
#     dct[k][1] -= (c*dct[k][0])
#     cost += dct[k][0]*dct[k][2]
# #print(cost)
# add_c = r//cost
# c += add_c
# r -= (add_c*cost)
 
# while not any(dct[k][1] >= 0 and dct[k][1] < dct[k][0] and r < dct[k][2] for k in dct):
#     c += 1
#     for k in dct:
#         while dct[k][1] >= 0 and dct[k][1] < dct[k][0]:
#             r -= dct[k][2]; dct[k][1] += 1
#     for k in dct:
#         dct[k][1] = 0 
 
# print(c)