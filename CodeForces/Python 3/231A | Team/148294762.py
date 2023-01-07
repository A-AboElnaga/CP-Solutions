NumOfProp = int(input())
rslt =0
for x in range(NumOfProp):
  prop = str.split(input()," ")
  if (int(prop[0])+int(prop[1])+int(prop[2])) >1:
    rslt +=1
    
print(rslt)
  