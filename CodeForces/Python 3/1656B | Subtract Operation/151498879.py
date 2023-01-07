for t in range(int(input())):
  n,k = list(map(int,str.split(input())))
  an= list(map(int,str.split(input())))
  rslt ="NO"
  an.sort(reverse=True)
  an=set(an) 
  for el in an:
      if (el-k) in an:
          rslt="YES"
          break
  print(rslt)