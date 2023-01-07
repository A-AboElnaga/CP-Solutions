for test in range(int(input())):
  n,m = list(map(int,str.split(input())))
  rslt = n*m/2
 
  if rslt > (rslt//1):
    rslt =  (rslt//1) +1
  print(int(rslt))