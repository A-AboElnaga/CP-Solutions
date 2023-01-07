N = int(input())
C=N//2
Txt= C*('I hate that I love that ')
Txt += N%2 *( 'I hate that ')
print(Txt[:-5:]+'it')