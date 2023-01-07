numbers= list(map(int,str.split(input(),'+')))
 
n_3= 0
n_2 =0
n_1 =0
for x in numbers:
  if x ==3:
    n_3 +=1
  elif x ==2:
    n_2 +=1
  else:
    n_1 +=1
rslt= '1+'*n_1 +'2+'*n_2 + '3+'*n_3
print(rslt[:len(rslt)-1])
 