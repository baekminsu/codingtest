N = int(input())
cnt = 1
for i in range(N,0,-1):
    for j in range(i-1):
        print(" ",end="")
    if j == i-2:
        for k in range(cnt):
            print("*",end="")
    cnt += 2
    print("")
for i in range(cnt):
    print("*",end="")

