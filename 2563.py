matrix = [[0 for j in range(100)] for i in range(100)]
N = int(input())

result = 0

for i in range(N):
    a,b = map(int,input().split())
    for j in range(10):
        for k in range(10):
            matrix[100-j-b-1][a+k] += 1   

for i in range(100):
    for j in range(100):
        if matrix[i][j] > 0 :
            result += 1

print(result)