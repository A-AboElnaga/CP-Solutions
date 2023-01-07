rslt ='NO' 
for N in range(int(input())):
   Name, bef, aft =list(str.split(input()))
   bef =int(bef)
   aft =int(aft)
   if bef>= 2400 and aft>bef:
    rslt ='YES' 
    break
print(rslt) 
   
 