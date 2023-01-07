for t in range(int(input())):
  n = int(input())
  ai= list(map(int,str.split(input())))
  ai.sort(reverse=True)
  if ai[0]>1 and n==1:
    print("NO")
  elif ai[0]==1 and n==1:
    print("YES")
  elif ai[0]-ai[1]>1:
    print("NO")
  else: print("YES")
  