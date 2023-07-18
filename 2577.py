A = int(input())
B = int(input())
C = int(input())
result = A* B* C
result = str(result)
for i in range(10):
    cnt = 0 
    for j in range(len(result)):        
        if result[j] >= '0' and result[j] <='9':
            if i == int(result[j]):
                cnt +=1
    print(cnt)
