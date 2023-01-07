i=input
print(['Oh, my keyboard!','I become the guy.'][int(i())==len(set(i().split()[1:]+i().split()[1:]))])