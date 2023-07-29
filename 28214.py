N,K,P = map(int,input().split())
nkList = list(map(int,input().split()))
sell = 0 
for i in range(0,N*K,K):
    check =0
    for j in range(i,i+K):
        if nkList[j] == 0:
            check +=1
    if check < P:
        sell +=1
print(sell) 
    
