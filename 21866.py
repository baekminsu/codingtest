score = list(map(int,input().split()))
maxScore = 0
check = 0
for i in range(1,10):
    if i % 2 == 1:
        maxScore += 100
    if score[i-1] > maxScore:
        print("hacker")
        check = 1
        break
if sum(score) >= 100 and check != 1:
    print("draw")
elif check != 1:
    print("none")

