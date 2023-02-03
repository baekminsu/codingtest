x = int(input())

for i in range(0,x):
    a,b = map(int,input().split())
    print("Case #%d: %d" %(i,a+b))