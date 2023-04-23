N,K = map(int,input().split())

sum = 1
sum2 = 1
sum3 = 1
result = 0

for i in range(1,N+1):
    sum *= i
for i in range(1,K+1):
    sum2 *= i
for i in range(1,(N-K)+1):
    sum3 *= i

result = sum  // ( sum2 * sum3)

print(result)