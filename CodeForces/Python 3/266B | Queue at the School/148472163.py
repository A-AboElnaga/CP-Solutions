n,t= list(map(int,str.split(input()," ")))
line = input()
 
for i in range(t):
  if ('BG') in line:
    line = line.replace('BG','GB')
  
print(line)