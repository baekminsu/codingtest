N = int(input())
prize = 0
maxPrize= 0
for i in range(N):
    A,B,C = map(int,input().split())
    if A == B and B == C:
        prize = 10000+(A * 1000)
    elif A != B and A != C and B != C:
        max = A
        if max < B:
            max = B
        if max < C:
            max = C
        prize = max *100

    elif A == B or A == C:
        prize = 1000 + (A*100)
    elif B == C:
        prize = 1000 + (B*100)
    if maxPrize < prize:
        maxPrize = prize


print(maxPrize)        



