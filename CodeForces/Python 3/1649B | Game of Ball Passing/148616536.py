 
t = int(input())
for case in range(t):
  n = int(input())
  ai = list(map(int,str.split(input()," ")))
  m = max(ai)
  s = sum(ai) -m
  
  if m == 0:
    print(0)
  else: 
    if m == min(ai):
        print(1)
    else:
      print(max(1,m-s))
    