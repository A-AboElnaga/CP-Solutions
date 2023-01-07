for t in range(int(input())) :
 n, m,rb,cb,rd,cd=list(map(int,str.split(input())))
 if cd >= cb:
  Crsl= cd-cb
 else:
  Crsl = m-cb + m-cd
 if rd >= rb:
   Rrsl = rd - rb
 else:
    Rrsl =n-rb+n-rd
 print(min(Rrsl, Crsl)) 
    