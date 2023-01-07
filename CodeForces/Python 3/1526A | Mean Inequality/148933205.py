for t in range(int(input())):
  n = int(input())
  a= list(map(int,str.split(input())))
  a.sort()
  for i in range(2*n-1):
    if (a[i-1]+a[i+1])/2 == a[i]:
      temp = a[i]
      a[i] = a[i-1]
      a[i-1] = temp
  for i in range(2*n-1):
      if (a[i-1]+a[i+1])/2 == a[i]:
        temp = a[i]
        a[i] = a[i-1]
        a[i-1] = temp
        
  for el in a:
    print(el, end=" ")
    