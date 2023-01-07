n = int(input())
x= 0
for i in range(n):
  line = input()
  if "x" in line or "X" in line:
    if "++" in line:
      x +=1
    elif "--" in line:
      x -=1
print(x)