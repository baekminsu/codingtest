x = int(input())
n = int(input())

sum = 0

for i in range(1,n+1):
    a,b = map(int, input().split())
    sum = sum + (a* b)

if(sum == x) :
    print("Yes")
else:
    print("No")