n, k= list(map(int,str.split(input())))
 
max_pos=(((k-1)*k)//2)+1
if n==1:
  print(0)
elif n<=k:
  print(1)
elif n>max_pos:
  print(-1)
else:
  m=((1+(1+(4*(max_pos-n)*2))**0.5)/2)
  if m*(m-1)+n>max_pos:
    m-=1
  print(int(k-m))