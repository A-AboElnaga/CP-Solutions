a=input()
a=a[1:-1:]
a=a.replace(",","")
a=a.replace(" ","")
a=set(a)
print(len(a))