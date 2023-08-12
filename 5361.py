T = int(input())
fee = [350.34,230.90,190.55,125.30,180.90]
sum = 0
for i in range(T):
    sum =0 
    charge = list(map(float,input().split()))
    for j in range(5):
        sum += (charge[j] * fee[j])
    print("$%.2f" %(sum))
