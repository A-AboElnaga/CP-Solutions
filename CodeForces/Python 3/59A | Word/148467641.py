s=input()
uppers= 0
for letter in s:
  if letter.isupper():
    uppers+=1
lowers = len(s) - uppers
if lowers >= uppers:
  print(s.lower())
  
else: print(s.upper())