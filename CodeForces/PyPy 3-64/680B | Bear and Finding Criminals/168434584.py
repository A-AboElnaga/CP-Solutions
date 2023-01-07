# -*- coding: utf-8 -*-
"""
Created on Sat Aug 13 16:37:01 2022
thinking: 09:14 -->  9:16
imp 9:16 -->
@author: A
"""
n,a = list(map(int,str.split(input())))
n-=1
a-=1
lst_t= list(map(int,str.split(input())))
 
count = 0      
for i in range(max(n-a,a)+1): #check range
  a_pi = False
  a_ni = False
  if (a+i <= n and lst_t[a+i]==1): 
    a_pi = True
  if (a-i >=0 and lst_t[a-i]==1) :
    a_ni = True
    
  if ((a+i <= n and lst_t[a+i]==1) and a-i <0) or ((a-i >= 0 and lst_t[a-i]==1) and a+i > n ):
    count+=1
    continue
  if a_pi and a_ni:
    if i!=0:
      count+=2
      continue
    else:
      count+=1
print(count)
  