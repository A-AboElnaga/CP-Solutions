for t in range(int(input())):
    txt="YES"
    n = int(input())
    lst = list(map(int,str.split(input())))
    b = max(lst)
    i = lst.index(b)
    for _ in range(i+1,n-1):
      if lst[_]<lst[_+1]:
        txt= "NO"
    if txt=="YES":
      for _ in range(i-1,0,-1):
        if lst[_]<lst[_-1]:
          txt= "NO"
    print(txt)
      
      