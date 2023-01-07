for t in range(int(input())):
  s = input()
  s_cpd =s 
  x=len(s)
  y =x
  letters = "abcdefghijklmnopqrstuvwxyz"
  for letter in letters:
    try:
      v = x-s[::-1].index(letter)-1
      if v < y:
        y=v
      if len(letters)==0:
        break
    except:
      continue
  print(s[y::])