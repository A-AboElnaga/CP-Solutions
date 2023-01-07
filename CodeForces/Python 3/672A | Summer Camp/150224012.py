n= int(input())
if n <10:
  print(n)
elif n <=189:
  c= ((n-9)//2+9+((n-9)%2))
  if (n-9)%2 ==0 :
    print(str(c)[1])
  else:
    print(str(c)[0])
elif n<=1000:
  c= ((n-190)//3+ 100)
  if (n-190)%3 ==0 :
    print(str(c)[0])
  elif (n-190)%3 ==1 :
    print(str(c)[1])
  else:
    print(str(c)[2])