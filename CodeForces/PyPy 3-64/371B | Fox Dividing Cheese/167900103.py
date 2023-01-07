import math
from collections import Counter
a,b=list(map(int,str.split(input())))
rslt=0
if a ==b:
  print(0)
else:
  c=  math.gcd(a,b)
  a_fac=[2,3,5]
  b_fac=[2,3,5]
  for i in [2,3,5]:
    while a%i==0:
      a=a//i
      a_fac+=[i]
    while b%i==0:
      b=b//i
      b_fac+=[i]
 
  if b!=a:
    print(-1)
    
  else:
    facs_a=Counter(a_fac)
    facs_b=Counter(b_fac)
    for key in facs_a:
      rslt+=abs(facs_a[key]-facs_b[key])
    print(rslt)