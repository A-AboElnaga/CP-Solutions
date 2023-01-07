n,m=list(map(int,str.split(input())))
 
match_boxs=[]
 
for _ in range(m): 
  count,val=(tuple(map(int,str.split(input()))))
  match_boxs.append((val,count))
match_boxs=sorted(match_boxs,reverse=True)
 
rslt=0
for box in match_boxs:
  if n==0:
    break
  else:
    take = min(n,box[1])
    rslt+=take*box[0]
    n-=take
print(rslt)