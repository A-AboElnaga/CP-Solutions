n = int(input())
    
num = (input())
 
rslt= ""
mapper ={'0':"","1":"","2":"2","3":"3","4":"322","5":"5","6":"53","7":"7","8":"7222","9":"7332"}
 
for dig in num:
  rslt+=mapper[dig]
  
print("".join(sorted(rslt,reverse=True)))