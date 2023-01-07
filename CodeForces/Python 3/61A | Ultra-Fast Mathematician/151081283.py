s1= input()
s2= input()
rslt=""
for i in range(len(s1)):
 if s1[i] == s2[i]:
  rslt+= '0'
 else: 
  rslt+= '1'
print(rslt)