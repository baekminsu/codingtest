T = int(input())
for i in range(T):
    floor = 0
    room = 1
    H,W,N = map(int,input().split()) # 층수 방수 손님
    for j in range(N):
        floor +=1
        if floor > H:
            room +=1
            floor = 1
    print("%d%02d" %(floor,room))