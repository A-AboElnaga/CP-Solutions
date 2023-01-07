for case in range(int(input())):
  s = input()
  c = input()
  indexs =[]
  for i in range(len(s)):
    if s[i]== c:
      indexs.append(i)
  if len(s)>1 and c in s:
    for index in indexs :
      if index%2 ==0:
        rslt ="YES"
        break
      else: 
        rslt ='NO'
    print(rslt)
  elif s==c:
    print('YES')
  else:
    print('NO')