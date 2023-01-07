n = int(input())
rslt =0
for x in range(1,int((n/2)+1)):
  if (n-x)%x == 0:
    rslt +=1
print(rslt)