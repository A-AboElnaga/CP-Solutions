n = int(input())
s= ""
for _ in range(n):
  s +=input()
s = s.replace("00","0 0")
s = s.replace("11","1 1")
s =s.split(" ")
print(len(s))