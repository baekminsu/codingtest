N = int(input())
for i in range(N):
    if N == 1:
        print("*")
        break
    for j in range(N):
        if (j%2) == 0:
            print("*",end="")
        elif (j%2)==1:
            print(" ",end="")
    print("")
    for j in range(N):
        if (j%2) == 0:
            print(" ",end="")
        elif (j%2)==1:
            print("*",end="")
    print("")