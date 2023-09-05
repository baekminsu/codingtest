N = int(input())
for i in range(N-1):
    for j in range(i+1):
        print("*",end="")
    print("")
for i in range(N):
    print("*",end="")
print("")

for i in range(N-1,0,-1):
    for j in range(i):
        print("*",end="")
    print("")