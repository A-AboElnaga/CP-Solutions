# -*- coding: utf-8 -*-
"""
Created on Sun Mar  6 12:02:23 2022
 
@author: Toqa Alaa
 
"""
 
cost =0
index1= 0
index2= 0
t= int(input())
for i in range(t):
    n= int(input())  
    lst = list(map(int, input().split()))
    if 0 not in lst:
        cost=0
 
    else:
      for i in range(n):
          if lst[i]==1:
              index1=i
          else:
            break
      for i in range(n-1, -1, -1):
      
          if lst[i]==1:
              index2= i
          else:
            break
          cost= index2- index1
    print(cost)
              
        
        
            
            
    
     
    
 
 
        
        
        
 
 
 
 