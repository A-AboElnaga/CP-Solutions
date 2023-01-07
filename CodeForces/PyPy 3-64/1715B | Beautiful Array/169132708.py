from math import floor
for t in range(int(input())):
  n , k, b, s = list(map(int,str.split(input())))
  if floor(s/k)>=b and ((n-1)*(k-1)) +(k*b)+(k-1)>=s:
    if floor(s/k) ==b:
      lst = [0]*(n-1) + [s]
      print(*lst)
    else:
      rem =  s - ((b+1)*k-1)
      s= s- rem
      if (n-1)>= rem:
        lst=[0]*(n-rem-1) + [1]*rem + [s] 
        print(*lst)
      else:
        num_cel_with_k_1 = rem//(k-1)
        lst_cel= rem%(k-1)
        if lst_cel>0:
          if num_cel_with_k_1+2 > n:
            print(-1)
          else:  
            lst= [0]*(n-num_cel_with_k_1-2)+ [lst_cel] + [k-1]*num_cel_with_k_1 + [s]
            print(*lst)
        else:
          if num_cel_with_k_1+1 > n:
            print(-1)
          else:  
            lst= [0]*(n-num_cel_with_k_1-1)+ [k-1]*num_cel_with_k_1 + [s]
            print(*lst)
        
  else:
    print(-1)