# -*- coding: utf-8 -*-
"""
Created on Sat Aug 13 16:54:49 2022
 
@author: A
"""
 
for t in range(int(input())):
  n= int(input())
  lst=[]
  if n%2 ==0:
    for i in range(1,n+1,2):
      lst+=[i+1,i]
  else:
    lst=[1]
    for i in range(2,n+1,2):
      lst+=[i+1,i]
    
  print(*lst)