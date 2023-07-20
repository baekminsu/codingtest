N = int(input())
sec = 1
week = 604800
for i in range(1,N+1):
    sec *= i
result = sec // week
print(result)
