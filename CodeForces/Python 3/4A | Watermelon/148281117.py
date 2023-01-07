# -*- coding: utf-8 -*-
"""
Created on Fri Mar  4 13:30:59 2022
 
@author: A
"""
 
# A. Watermelon
import sys
for inpt in sys.stdin:
    if 'Stop' == inpt.rstrip():
       break
    if int(inpt) %2 == 0 and int(inpt)>2:
      sys.stdout.write(str("YES") + '\n')
    else : sys.stdout.write(str("No") + '\n')
      