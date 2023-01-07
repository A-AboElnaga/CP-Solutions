n= int(input())
s= (input())
rslt=""
x =1
while n>=1:
  rslt += s[0]
  s =s[x::]
  n-=x
  x+=1   
print(rslt)