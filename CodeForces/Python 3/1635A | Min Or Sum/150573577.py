for t in range(int(input())):
  n = int(input())
  ai= list(map(int,str.split(input())))
  for _ in range(n-1):
    a1=int(bin(ai[_]|ai[_+1]),base=2)
    ai[_]=0
    ai[_+1]=a1
      
  print(ai[-1])