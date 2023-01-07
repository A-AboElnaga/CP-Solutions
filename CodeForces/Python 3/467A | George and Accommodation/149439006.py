rslt =0
for case in range(int(input())):
  p, c= list(map(int,(str.split(input()))))
  if c-p >1:
    rslt +=1
print(rslt)
  
  