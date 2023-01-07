n=list(input())
n_asc =n.copy()
n_asc.sort()
n_dec =n_asc[::-1]
 
N7th =0
N4th = 0
if "7" in n:
 N7th= -n_asc.index("7")+(len(n)-n_dec.index("7"))
if "4" in n:
 N4th= -n_asc.index("4")+(len(n)-n_dec.index("4"))
if (N7th+N4th) ==4 or (N7th+N4th) ==7:
  print('YES')
else:
  print('NO')