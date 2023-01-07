n = int(input())
status = "YES" 
row1= input()
X,O=row1[0],row1[1]
if row1[-1]!=row1[0]:
      status="NO"
elif row1[1:-2:].replace(O,"")!="":
      status="NO"
elif X==O:
  status="NO"
for _ in range(1,n):
  row= input()
  for i in range(n):
    if _==i and row[i]!= X:
      status="NO"
    elif _+i==n-1 and row[i]!= X:
        status="NO"
    elif _!=i and _+i!=n-1 and row[i]!=O:
      status="NO"
 
print(status)