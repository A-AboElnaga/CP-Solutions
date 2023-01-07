s = input()
t = input()
pos =1
for color in t :
  if color == s[pos-1]:
    pos+=1
print(pos)