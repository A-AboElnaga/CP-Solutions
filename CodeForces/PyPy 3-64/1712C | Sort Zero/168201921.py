# -*- coding: utf-8 -*-
"""
Created on Sat Aug 13 22:42:21 2022
 
@author: A
"""
 
for _ in range(int(input())):
    n=int(input())
    a=[*map(int,input().split())]
    ordered=[]
    w=set()
    for i in a:
      if ordered and (ordered[-1]>i or i in w):
        while ordered:
          w.add(ordered.pop())
      ordered.append(i)
    print(len(w))