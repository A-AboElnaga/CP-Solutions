x=int(input())
rslt =0
for i in range(5,0,-1):
  rslt += x//i
  x = x%i
  
 
print(rslt)