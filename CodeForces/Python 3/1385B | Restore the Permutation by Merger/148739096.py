for t in range(int(input())):
  n = int(input())
  l = list(map(int,str.split(input())))
  rslt = []
  for el in l :
    if el in rslt:
      print(el, end=" ")
    else:
      rslt.append(el)
 
  
  
  