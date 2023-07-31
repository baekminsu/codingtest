N = int(input())
last = 0
for i in range(N):
    score = list(map(int,input().split()))
    high = 0
    for j in range(2):
        if high <= score[j]:
            high = score[j]
    result = high
    high = 0
    for j in range(2,7):
       if high <= score[j]:
           high = score[j]
    result = result + high
    for j in range(2,7):
        if score[j] == high:
            score[j] = 0
            break
    high = 0
    for j in range(2,7):
       if high <= score[j]:
           high = score[j]
    result = result + high
    if last < result:
        last = result

print(last)