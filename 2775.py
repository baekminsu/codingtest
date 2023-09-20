T = int(input())  #14층과 14호까지있다 지하까지 층은 15개
floor = []
floor1 =[]
apart = []
human = 0
for i in range(1,15):
    floor1.append(i)
apart.append(floor1)

for i in range(T):
    a = int(input())
    b = int(input())

    for j in range(1,16): # floor
        floor =[]
        for k in range(1,15): # ho su
            human = 0
            for o in range(k):
                human += apart[j-1][o]
            floor.append(human)

        apart.append(floor)
    print(apart[a][b-1])
