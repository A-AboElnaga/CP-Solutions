for t in range(int(input())):
  n,k = list(map(int,str.split(input())))
  a = list(map(int,str.split(input())))
  d = max(a)
  a1 = a.copy()
  d1= d-min(a)
  for i in range(n):
    a[i] = d - a[i]
    a1[i]= d1- a[i]
  if k %2 == 0 :
    for i in range(n):
      print(a1[i],end=" ")
    print("")
  else:
    for i in range(n):
      print(a[i],end=" ")
    print("")
    
  
  
      
      