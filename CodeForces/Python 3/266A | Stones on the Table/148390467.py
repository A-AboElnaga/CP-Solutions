length = int(input())
colors= str(input())
rslt =0
now = colors[0]
for i in range(1,length):
  if colors[i]==now:
    rslt +=1
  else: now = colors[i]
 
print(rslt)