def MenOfPassion(n):
    Sum = 0
    for i in range(1,n-1):
        for j in range(i+1,n):
            for k in range(j+1,n+1):
                Sum += 17
    return Sum

Sum = 0 
N = int(input())

for i in range(1,N):
    Sum = Sum + (( i * (i-1)) //2)


print(Sum)
print("3")

#1,2,3,4,5,6,7
# 1, 3, 6,10,15,21,28,