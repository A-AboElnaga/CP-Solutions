name = str.lower(input())
rslt =0
while len(name)> 0:
  rslt +=1
  name =name.replace(name[0],"")
if rslt % 2 == 0:
  print('CHAT WITH HER!')
else:
   print('IGNORE HIM!')