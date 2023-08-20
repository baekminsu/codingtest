N = int(input())
mirror = []
for i in range(N):
    mirror.append(input())
K = int(input())

if K == 1:
    for i in range(N):
        for j in range(N):
            print(mirror[i][j],end="")
        print("")
elif K == 2:
    for i in range(N):
        for j in range(N-1,-1,-1):
            print(mirror[i][j],end="")
        print("")
elif K == 3:
    for i in range(N-1,-1,-1):
        for j in range(N):
            print(mirror[i][j],end="")
        print("")
