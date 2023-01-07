for t in range(int(input())):
  n = int(input())
  rslt =[a for a in range(n,0,-1)]
  rs =    rslt.copy()
  for i in range(1,n+1):
    print(i,end=' ')
    rs = rslt.copy()
    rs.remove(i)
    for e in rs:
      print(e, end=" ")
    print("")
      