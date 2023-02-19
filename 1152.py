S = input()

Cnt = 0

for i in S:
    if i ==' ':
        Cnt = Cnt + 1

if S[0] == ' ':
    Cnt = Cnt -1

if len(S) == 1 and S[0] == ' ':
    Cnt = 0
    print(Cnt)
else:
    if S[len(S)-1] == ' ':
        print(Cnt)
    else:
        print(Cnt+1)
   