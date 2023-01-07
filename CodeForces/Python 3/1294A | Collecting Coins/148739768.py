for t in range(int(input())):
 
  a,b,c,n = list(map(int,str.split(input())))
  if (a+b+c+n)%3 ==0 and (2*max(a,b,c)-((a+b+c)-max(a,b,c)))<= n :
    print('YES')
  else:
    print('No')
 
 
  
  
  