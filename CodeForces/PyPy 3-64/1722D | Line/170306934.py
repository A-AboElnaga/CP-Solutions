# -*- coding: utf-8 -*-
"""
Created on Tue Aug 30 17:11:32 2022
 
@author: A
"""
 
for t in range(int(input())):
  n= int(input())
  line = input()
  current =0
  lst=[]
  for _ in range(n):
     if line[_] == "R":
       inc=n-_-1
     else: inc=_
     current+=inc
     if inc == max(_,n-_-1):
       continue
     else:
       lst.append([max(_,n-_-1),min(_,n-_-1),_])
  lst = sorted(lst,reverse=True)
  for i in range(len(lst)):
    n-=1
    current += -lst[i][1]+lst[i][0]
    print(current,end=" ")
  for i in range(n):
    print(current,end=" ")
  print("")
  
  
  
       