for q in range(int(input())):
  n,a,b = list(map(int,str.split(input())))
  print(min(((n//2*b)+n%2*a),a*n))