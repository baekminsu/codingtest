team = []
result1 = []
result2 = []
temp = []
for i in range(3):
    team.append(list(input().split()))
for i in range(3):
    for j in range(i+1):
        if int(team[i][1]) < int(team[j][1]):
            temp = team[i]
            team[i] = team[j]
            team[j] = temp
for i in range(3):
    result1.append(int(team[i][1])%100)
for i in range(3):
    for j in range(i+1):
        if int(team[i][0]) > int(team[j][0]):
            temp = team[i]
            team[i] = team[j]
            team[j] = temp
for i in range(3):
    result2.append(team[i][2][0])

for i in result1:
    print(i ,end="")
print("")
for i in result2:
    print(i,end="")



