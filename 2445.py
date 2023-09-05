N = int(input())
newN = N
for i in range(N):
    for j in range(i+1):
        print("*",end="")
    for j in range(newN-1):
        print(" ",end="")
    for j in range(newN-1):
        print(" ",end="")
    for j in range(i+1):
        print("*",end="")
    newN -= 1
    print("")
newN = 1
for i in range(N-1,0,-1):
    for j in range(i):
        print("*",end="")
    for j in range(newN):
        print(" ",end="")
    for j in range(newN):
        print(" ",end="")
    for j in range(i):
        print("*",end="")
    newN +=1
    print("")