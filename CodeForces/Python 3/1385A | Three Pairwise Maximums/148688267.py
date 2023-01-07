for t in range(int(input())):
  a,b,c= 0,0,0
  l = list(map(int,str.split(input())))
  l.sort(reverse=True)
  [x,y,z] =l
  if l[0]==l[1] :
    if x ==y:
      a =x
      b =z
      c = z-1
      if c == 0:
        c +=1
      
    elif x>y:
      b,c,a = x,y,y-1
      if y ==1 :
        a+=1
    elif y>x :
      b,c,a = x,y,x-1
      if x ==1:
        a +=1
    print('YES')
    print(a,b,c)
  else:
    print('NO')
      