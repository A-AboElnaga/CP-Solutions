for t in range(int(input())):
   s= input()
   c1,c2=s[0],s[1]
   s= input()
   c3,c4=s[0],s[1]
   s= set([c1,c2,c3,c4])
   print(len(s)-1)
  