N = int(input())
score = list(map(int,input().split()))
mark = 0 
result = 0
for i in range(len(score)):
    if score[i] == 1:
        mark +=1
    else:
        mark = 0
        continue
    result += mark
print(result)