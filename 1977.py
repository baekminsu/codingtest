M = int(input())
N = int(input())
hab = 0
min_cnt = 10001
for i in range(M,N+1):
    for j in range(1,i+1):
        if j*j == i :
            hab +=i
            if min_cnt > i:
                min_cnt = i

if hab != 0:
    print(hab)
    print(min_cnt)
elif hab == 0:
    print(-1)
