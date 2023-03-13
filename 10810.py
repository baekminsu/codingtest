N,M = map(int,input().split())
basket =[0] * N

for i in range (M):
    i,j,k = map(int,input().split())
    i = i -1 
    j = j -1

    for j in range (i,j+1):
        basket[j] = k

for i in basket:
    print(i,end=" ")