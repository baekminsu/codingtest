check = [0 for i in range(31)]

for i in range(1,29):
    num = int(input())
    check[num] = 1


for num in range(1,31):
    if check[num] == 0:
        print(num)



