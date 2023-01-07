from sys import stdin
input=stdin.readline
for n in range(int(input())):
  a,b=list(map(int,str.split(input())))
  n = round((a*b)**(1/3))
  
  if n**3 == a*b and a%n==0 and b%n==0:
      print("YES")
  else:
      print("No")
    