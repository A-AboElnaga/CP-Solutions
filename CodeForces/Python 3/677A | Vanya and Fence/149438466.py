n, h = list(map(int,str.split(input())))
a  =list(map(int,str.split(input())))
a.sort(reverse = True)
 
for i in a:
  if i > h:
    n+=1
  else: break
print(n)