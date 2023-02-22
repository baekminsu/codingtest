N = int(input())
t= 1
for i in range(N-1,0,-1):
    
    for j in range(0,i):
        print(" ",end="")
    for j in range(0,t):
        print("*",end="")
    t = t+2
    print("")

for i in range(0,(N*2)-1):
    print("*",end="")
print("")
t = 3

for i in range(0,N-1):
    
    for i in range(0,i+1):
        print(" ",end="")

    for i in range(0,(N*2)-t):
        print("*",end="")

    t = t+2
    print("")




