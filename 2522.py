N = int(input())
a = 1
for i in range(N-1,0,-1):
    
    for j in range(i):
        print(" ",end="")
    for j in range(a):
        print("*",end="")
    a = a+1
    print("")

for i in range(N):
    print("*",end="")
print("")
a = N-1
for i in range(N):

    for j in range(i+1):
        print(" ",end ="")
    for j in range(a):
        print("*",end="")
    a = a-1
    if i != N-2:
        print("")