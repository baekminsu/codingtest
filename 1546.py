N = int(input())

N_List = list(map(int,input().split()))
M = max(N_List)
sum = 0 

for i in range(N):
    N_List[i] = (N_List[i]  / M) * 100
    sum = N_List[i] + sum

print(sum / N)