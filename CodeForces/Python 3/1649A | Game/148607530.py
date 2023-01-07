t= int(input())
for case in range(t):
  n = int(input())
  ai = list(map(int,str.split(input()," ")))
  coin =0
  if  0 not in ai:
    print(0)
  else:
    first_0 = ai.index(0)
    ia = ai.copy()
    ia = ia[::-1]
    last_0 = len(ia) - ia.index(0)
    print(last_0 - first_0+1)
    