(k,n,w)=list(map(int,str.split(input()," ")))
 
totalcost= k*(w)*(w+1)/2
if int(totalcost-n) > 0:
  if int(totalcost-n) < (totalcost-n):
    print(int(totalcost-n+1))
  else: print(int(totalcost-n))
else: print(0)