n = int(input())+1
stat = True
v = ''
while stat:
  for char in str(n):
    if str(n).count(char) ==1:
      v+="1"
  if v == "1111":
    stat = False
    print(n)
  else:
    n+=1
    v = ''