for t in range(int(input())):
   s = str(input())
   rslt= [0]
   if '1' in s:
 
     while '0' in s:
       i = s.index("0")
       rslt.append(i)
       s = s[1+i::]
     if len(s)> 0:
       rslt.append(len(s))
   rslt.sort(reverse=True)
   rslt = rslt[0::2]
   print(sum(rslt))