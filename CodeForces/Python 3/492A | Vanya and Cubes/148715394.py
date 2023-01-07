n = int(input())
row = 0
while n >0:
  row +=1
  n -= (row)*(row+1)/2
  
if n < 0:
  row -=1
print(row)