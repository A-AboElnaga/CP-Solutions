# -*- coding: utf-8 -*-
"""
Created on Sat Aug 13 16:37:01 2022
 
@author: A
"""
 
n= int(input())
lst=list(map(int,str.split(input())))
 
rslt=1
count =0
top=False
i=0
while i < n-1:
  if count ==0: #starting a new seq
    count+=1
    top=False
  if lst[i]<=lst[i+1] and not top : #non-dec_part
    count+=1
    i+=1
  elif lst[i]>lst[i+1] and not top: #non_inc
    count+=1
    top=True
    top_indx=i
    i+=1
  elif top and lst[i]<lst[i+1] : #if a peak reached before and a new peak apear end seq 
    rslt=max(rslt,count)
    top=False
    count=0
    i=top_indx+1
  elif top  and lst[i]>=lst[i+1] :
    count+=1
    i+=1
    
rslt=max(rslt,count)
print(rslt)
 
      
        
    
  