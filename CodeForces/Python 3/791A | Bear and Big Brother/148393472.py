 
Bob, Limak = list(map(int,str.split(input()," ")))
 
rslt =0
while Bob <= Limak:
  Bob *=3
  Limak *=2
  rslt +=1
print(rslt)