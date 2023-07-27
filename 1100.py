chess = [input() for _ in range(8)]
check = 0 
for i in range(8):
    for j in range(8):
        if (i % 2) == 0:
            if(j % 2) == 0:
                if chess[i][j] == 'F':
                    check+=1
                    
        if (i % 2) == 1:
            if(j % 2) == 1:
                if chess[i][j] == 'F':
                    check+=1
print(check)