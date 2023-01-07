for t in range(int(input())):
   s = input()
   s1 =s.count("1")
   s0= s.count("0")
   print(min((len(s) - 1) // 2, s1, s0))