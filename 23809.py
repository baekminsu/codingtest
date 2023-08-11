N = int(input())

for i in range(N):
    for j in range(N):
        print("@",end="")
    for j in range(N):
        print("   ",end="")
    for j in range(N):
        print("@",end="")
    print("")

for i in range(N):
    for j in range(N):
        print("@",end="")
    if N != 1 :
        for j in range(N):
            print("  ",end="")
    elif N == 1:
        for j in range(1):
            print("  ",end="")

    for j in range(N):
        print("@",end="")
    print("")

for i in range(N):
    for j in range(N):
        print("@@@",end="")
    print("")
        
for i in range(N):
    for j in range(N):
        print("@",end="")
    if N != 1 :
        for j in range(N):
            print("  ",end="")
    elif N == 1:
        for j in range(1):
            print("  ",end="")

    for j in range(N):
        print("@",end="")
    print("")

for i in range(N):
    for j in range(N):
        print("@",end="")
    for j in range(N):
        print("   ",end="")
    for j in range(N):
        print("@",end="")
    print("")