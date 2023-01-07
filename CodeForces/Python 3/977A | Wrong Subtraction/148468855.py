(n,k) = list(map(int,str.split(input()," ")))
n = str(n)
while k >0:
  last_digit = int(n[-1])
  if last_digit < k:
    k -= (last_digit+1)
    n= n[:-1:]
  else:
    n = str(int(n) - k)
    k =0
print(n)
    