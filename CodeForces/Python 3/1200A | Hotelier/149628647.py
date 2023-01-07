n= int(input())
s = input()
rslt =[0]*10
Ls = 0
Rs = -1
for letter in s:
  if letter =="L":
    for i in range(10):
      if rslt[i]==0:
        rslt[i]=1
        break
  elif letter =="R":
    for i2 in range(9,-1,-1):
      if rslt[i2]==0:
        rslt[i2]=1
        break
  else:
    rslt[int(letter)] = 0
for el in rslt:
  print(el, end = "")
print("")