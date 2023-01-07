length = int(input())
colors= str(input())
rslt =0
 
while "RR" in colors:
  rslt+=1
  colors=colors.replace("RR","R",1)
while "GG" in colors:
  rslt+=1
  colors=colors.replace("GG","G",1)
while "BB" in colors:
  colors=colors.replace("BB","B",1)
  rslt+=1
 
print(rslt)