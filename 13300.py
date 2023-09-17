N,K = map(int,input().split())
room_cnt = 0
room_boy = 0
room_girl = 0
infor = []
for i in range(12):
    infor.append(0)

for i in range(N):
    S,Y = map(int,input().split())
    if Y ==1:
        if S ==1:
            infor[0] +=1
        elif S == 0 :
            infor[1] +=1
    elif Y == 2:
        if S ==1:
            infor[2] +=1
        elif S == 0 :
            infor[3] +=1
    elif Y == 3:
        if S ==1:
            infor[4] +=1
        elif S == 0 :
            infor[5] +=1
    elif Y == 4:
        if S ==1:
            infor[6] +=1
        elif S == 0 :
            infor[7] +=1
    elif Y == 5:
        if S ==1:
            infor[8] +=1
        elif S == 0 :
            infor[9] +=1
    elif Y == 6:
        if S ==1:
            infor[10] +=1
        elif S == 0 :
            infor[11] +=1
for i in range(12):
    if i % 2 == 0:
        room_boy += infor[i]
    elif i % 2 == 1:
        room_girl += infor[i]

for i in range(12):
    if i % 2 == 0:
        while infor[i] > K:
            room_cnt +=1
            infor[i] = infor[i] - K
        if infor[i] != 0:
            room_cnt +=1

    if i % 2 == 1:
        while infor[i] > K:
            room_cnt +=1
            infor[i] = infor[i] - K
        if infor[i] != 0:
            room_cnt +=1

print(infor)
print(room_cnt)



