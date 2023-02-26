S = input()
last = len(S)
cnt = 0
for i in range(len(S)//2):
    if S[i] != S[last-1]:
        cnt = cnt +1
    last = last -1

if cnt > 0 :
    print(0)
else:
    print(1)