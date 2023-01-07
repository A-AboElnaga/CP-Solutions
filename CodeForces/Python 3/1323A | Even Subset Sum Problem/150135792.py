for t in range(int(input())):
  n = int(input())
  a = list(map(int,str.split(input())))
  Sum=0
  rslt=0
  if n==1 and a[0]%2!=0:
    print(-1)
  else:
    for _ in range(n):
      if a[_]%2==0:
        print(1)
        print(_+1)
        break
      else:
        Sum+=a[_]
        rslt+=1
        if Sum%2==0:
          print(rslt)
          for i in range(1,rslt+1):
            print(i,end=" ")
          print("")
          break