import math
 
n = int(input())
 
def primefactors(n):
   list1 =[]
   #even number divisible
   if n%2 ==0:
     list1.append(2),
     while n % 2 == 0: 
        n = n / 2
    
   #n became odd
   for i in range(3,int(math.sqrt(n))+1,2):
     
     if n%i ==0:
       list1.append(i),
       while n % i == 0: 
          n = n / i
   if n>1:
     list1.append(n)
   return list1
 
prime_factors = primefactors(n)
rslt = 1
     
if len(prime_factors)==0:
  print(n)
else:
  for p in prime_factors:
    rslt*=p
  print(int(rslt))