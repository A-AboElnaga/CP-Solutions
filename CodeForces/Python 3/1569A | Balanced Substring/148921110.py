for t in range(int(input())):
  n = int(input())
  s= input()
  if len(s)>1:
    a_s, b_s = s.count("a"),s.count('b')
    if a_s == b_s:
      print("1 "+str(len(s)))
    else:
      for i in range(len(s)-1):
        if s[i]+s[i+1] == "ab" or s[i]+s[i+1] == "ba":
          print(str(i+1)+' '+str(i+2))
          break
        if i == len(s)-2:
          print("-1 -1")
          break
        
  else:
    print("-1 -1")