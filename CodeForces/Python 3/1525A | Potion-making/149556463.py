 
for case in range(int(input())):
  k = int(input())
  for i in range(max(k,100-k),0, -1):
    if k%i == 0 and (100-k)%i ==0:
      print(100//i)
      break
    
    
    