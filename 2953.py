cooker = []
max_value  = 0
max_cooker = 0
temp = 0
for i in range(5):
    point = list(map(int,input().split()    ))
    cooker.append(point)
for i in range(5):
    temp = 0
    for j in range(4):
        temp += cooker[i][j]
    if temp > max_value:
        max_value = temp
        max_cooker = i

print("%d %d" %(max_cooker+1,max_value))