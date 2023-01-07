NumTestCases = int(input())
for i1 in range(NumTestCases):
    (n,x,y) = list(map(int,str.split(input(), " ")))
    ai = list(map(int,str.split(input(), " ")))
    Alice = x
    Bob = x+3
    aiSum =sum(ai)
    if ((x+aiSum)%2) == y%2:
        print ("Alice")
    else:
      print("Bob")
    