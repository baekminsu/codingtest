N,K = map(int,input().split())
multi = list(map(int,input().split()))    
multi = sum(multi)
if multi >= N :
    print("YES")
else:
    print("No")