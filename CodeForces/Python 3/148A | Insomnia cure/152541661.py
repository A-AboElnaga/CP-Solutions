*a,d=map(int,open(0))
print(sum(any(i%j==0 for j in a) for i in range(1,d+1)))