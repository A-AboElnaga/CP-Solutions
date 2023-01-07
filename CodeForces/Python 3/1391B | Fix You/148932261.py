for t in range(int(input())):
  n, m = list(map(int,str.split(input())))
  lists= []
  for _ in range(n):
    lists.append(list(input()))
  rslt = 0
  for i in range(n):
    for j in range(m):
      if i == n-1 and j < m-1 and lists[i][j]!= 'R':
        rslt +=1
      if j == m-1 and i < n-1 and lists[i][j]!= 'D':
        rslt +=1
  print(rslt)
    