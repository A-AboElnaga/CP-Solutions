# -*- coding: utf-8 -*-
"""
Created on Sat Aug 13 16:37:01 2022
 
@author: A
"""
 
for t in range(int(input())):
  n,k= map(int,str.split(input()))
  lst_n = list(map(int,str.split(input())))
  count=0
  for i in range(1,k+1):
    if lst_n[i-1]>k:
      count+=1
  print(count)