for t in range(int(input())) :
 N = int(input())
 Rem=N%3
 C =N//3
 if Rem ==2:
  print('21'*C +'2')
 elif Rem ==0:
  print('21'*C)
 
 else :
  print('12'*C +'1')