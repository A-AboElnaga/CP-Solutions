# -*- coding: utf-8 -*-
"""
Created on Sat Aug 13 16:54:49 2022
 
@author: A
"""
 
for t in range(int(input())):
  n,k=list(map(int,str.split(input())))
  if n+k >=4:
    if k%2!=0 :
     a= 1
     b= 2
     print("YES")
     for i in range(n//2):
      print(a,b)
      a+=2
      b+=2
    elif k%4 ==0:
      print("NO")
    else:
      print("YES")
      a=1
      for i in range(4,n+1,4):
        print(i-1,i)
 
      for i in range(2,n+1,2):
        if i%4!=0:
          print(i,i-1)  
      
  else:
    print("NO")