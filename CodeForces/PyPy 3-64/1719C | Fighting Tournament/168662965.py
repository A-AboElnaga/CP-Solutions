 
for t in range(int(input())):
  n,q=list(map(int,str.split(input())))
  a= list(map(int,str.split(input())))
  
  mx_wins=[0]*n
  
  if a[0] ==n:
    mx_wins[0]=10**(9)
  
  else:
    mx_indx=a.index(n)
    mx_wins[mx_indx]= n-mx_indx-1
    indx_to_inc=0
    for i in range(0,mx_indx):
      if a[indx_to_inc]==a[i]:
        continue 
      elif  a[indx_to_inc]>a[i]:
        mx_wins[indx_to_inc]=1+mx_wins[indx_to_inc]
      else:
        indx_to_inc=i
        mx_wins[indx_to_inc]=1+mx_wins[indx_to_inc]
      
  
  for _ in range(q):
    i,k =list(map(int,str.split(input())))
    if a[i-1]==n:
      if i==1:
        print(k)
      else:
        print(max(0,k-(i-2)))
    else:
     if k+1 >=mx_indx:
       print(mx_wins[i-1])
     elif i==1:
       print(min(mx_wins[i-1],k))
     else: 
       print(min(mx_wins[i-1],max(0,(k-(i-2)))))
          