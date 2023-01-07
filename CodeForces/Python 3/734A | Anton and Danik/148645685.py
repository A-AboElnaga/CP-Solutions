n = int(input())
wins= input()
 
A =wins.count("A")
if A > (n/2):
  print ('Anton')
elif A < (n/2):
  print('Danik')
else:
  print('Friendship')