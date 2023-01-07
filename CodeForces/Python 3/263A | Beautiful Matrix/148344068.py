pos_x, pos_y = 0, 0
for i in range(5):
  row = input()
  if "1" in row:
    row = row.replace(" ","")
    pos_x =row.index("1")+1
    pos_y = i+1
 
print((abs(pos_x - 3) + abs(pos_y-3)))
    