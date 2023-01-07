for t in range(int(input())):
    n = int(input())
    x =999999999999999999999999
    y =999999999999999999999999
    if n ==1:
      print(2)
    else: 
      if n%3 ==0 :
          x= (n/3)
      elif (n-2)%3 == 0:
          x =((n//3)+ 1)
      elif (n-1)%3 == 0 and n//3 >=1:
          x =((n//3)+ 1)
  
      
      if n%2 ==0:
        y = n//2
        print(min(int(x),int(y)))
      else:
          print(int(x))