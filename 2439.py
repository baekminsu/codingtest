n = int(input())

for i in range(1,n+1):
    for j in range(i,n):
        print(" ", end='')
    for j in range(0,i):
        print("*", end='')    
    print("")