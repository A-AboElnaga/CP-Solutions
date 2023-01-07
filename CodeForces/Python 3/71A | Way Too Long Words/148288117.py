# -*- coding: utf-8 -*-
"""
Created on Fri Mar  4 13:30:59 2022
 
@author: A
"""
word_list= []
n = int(input())
for x in range(n):
    word = str(input())
    if len(word) >10:
        txt = str(word[0]+str(len(word)-2)+word[-1])
        print(txt)
    else:
        print(word)