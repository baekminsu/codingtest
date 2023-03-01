N, M = map(int,input().split())
basket = []
for i in range(N):
    basket.append(i+1)
for j in range(M):
    i,j = map(int,input().split())
    i= i -1
    j= j-1
    temp = basket[i]
    basket[i] = basket[j]
    basket[j] = temp
    print(basket)

for i in basket:
    print(i,end=" ")