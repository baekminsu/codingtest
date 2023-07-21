N = int(input())
blank = 1

for i in range(N,0,-1):
    if i < N:
        for j in range(blank):
            print(" ",end="")
        blank +=1

    for j in range(i):
        print("*",end="")

    print("")
