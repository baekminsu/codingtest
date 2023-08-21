N = int(input())
for i in range(N):
    r,e,c = map(int,input().split())
    money = e-c
    if money > r:
        print("advertise")
    elif money == r:
        print("does not matter")
    elif money < r:
        print("do not advertise")