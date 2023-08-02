N = int(input())
name = []
result = []

for i in range(N):
    name.append(input())

for i in range(N):
    check = 0
    if name[i] == '0':
        continue
    else:
        for j in range(i+1,N):
            if name[j][0] == '0':
                continue
            if name[i][0] == name[j][0]:
                check += 1
                name[j] = '0'
    if check >= 4:
        result.append(name[i][0])
    name[i] = '0'
    print(name)
    print(result)

if len(result) == 0 :
    print("PREDAJA")
elif len(result) > 0 :
    result.sort()
    for i in result:
        print(i,end="")