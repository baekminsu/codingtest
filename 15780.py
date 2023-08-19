N,K = map(int,input().split())
multi = list(map(int,input().split()))    
sum = 0
for i in multi:
    if i % 2 == 0:
        sum += i //2
    elif i % 2 == 1:
        sum += (i // 2) +1
if sum < N:
    print("NO")
elif sum >= N:
    print("YES")
