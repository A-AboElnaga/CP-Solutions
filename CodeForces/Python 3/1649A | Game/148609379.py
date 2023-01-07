t= int(input())
for case in range(t):
  n = int(input())
  ai = list(map(int,str.split(input()," ")))
  coin =0
  crrnt = 0
  end_jump = 0
  start_jump = 0
  for i2 in range(n-1,0,-1):
    if ai[i2] ==1:
      continue 
    elif ai[i2] == 0:
      end_jump = i2+1
      break
  for i1 in range(0,n):
    if ai[i1] == 1:
      continue
    elif ai[i1]== 0:
      start_jump = i1-1
      break
  print(end_jump-start_jump)