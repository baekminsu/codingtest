N = int(input())
level = 1
sum = 0

for i in range(N):
    N_List = list(input())

    for j in range(len(N_List)):

        if N_List[j] == 'O':
            sum = sum + level

            if j == 9:
                break

            if N_List[j+1] =='O':
                level = level +1
            else:
                level = 1


    print(sum)
    level= 1
    sum = 0
