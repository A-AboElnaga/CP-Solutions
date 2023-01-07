n = int(input())
 
n_1fac = 1
n_2fac = 1
for x in range(1,n):
  n_1fac *=x
  
n_2fac = n_1fac
for y in range(n,((2*n)-1)):
  n_2fac *= y
 
print(int(n_2fac/(n_1fac**2)))
  