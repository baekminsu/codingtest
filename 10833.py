N = int(input())
result = 0
for i in range(N):
    stu,apple = map(int,input().split())
    rest = apple % stu
    result += rest
print(result)