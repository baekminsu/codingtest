N, M = map(int, input().split())
num = 1

for i in range(N):
    for j in range(M):
        if num % M == 0:
            print(num, end = '')
        else:
            print(num, end = ' ')
        num += 1
        
    print()