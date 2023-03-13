N,M = map(int,input().split())
arr= []
for i in range (1,N+1):
    arr.append(i)

for o in range (M):
    i,j = map(int,input().split())
    i = i -1
    j = j -1
    while i < j:
        temp = arr[i]
        arr[i] = arr[j]
        arr[j] = temp
        j= j -1
        i= i +1

for o in arr:
    print(o,end=" ")