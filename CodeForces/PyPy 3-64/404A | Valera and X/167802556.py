n=int(input())
s=''
for i in range(n):s+=input()
print('YES'if s==s[::-1]and s.count(s[0])==n*2-1 and s.count(s[1])==n**2 -(n*2-1) else'NO')