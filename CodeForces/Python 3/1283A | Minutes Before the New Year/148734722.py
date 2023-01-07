for t in range(int(input())):
  h, m = list(map(int,str.split(input())))
  m_rem = 60 - m + (24 -(h+1))*60
  print(m_rem)