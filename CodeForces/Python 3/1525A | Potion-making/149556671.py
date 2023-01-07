import math
for case in range(int(input())):
  k = int(input())
  i=math.gcd(k,100-k)
  print(100//i)
    
    