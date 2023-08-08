N = int(input())
if N != 0:
    traning = list(map(int,input().split()))
    aver = sum(traning) / N
    chance = 0 
    for i in range(1,N+1):
        chance += traning[i-1]*(1/N)
    result = aver / chance

    if result != 0:
        print("%.2f"%(result))
    elif result == 0 :
        print("divide by zero")
elif N == 0:
    print("divide by zero")

