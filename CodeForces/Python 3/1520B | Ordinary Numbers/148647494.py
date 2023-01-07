for test in range(int(input())):
  n = input()
  rslt = (len(n)-1)*9
  if int(n) > 9:
    if int(n) < int(len(n)*n[0]) :
      print(rslt + int(n[0])-1)
    else:
      print(rslt+int(n[0]))
  else:
    print(n)
      