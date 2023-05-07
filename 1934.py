T = int(input())
num = 0 
for i in range(T):
    A,B = map(int,input().split())
    for j in range(2,B+1):
        if (A % j == 0) and (B % j == 0):
            num = j
    if num != 0 :
        print( A* B // num)
    else:
        print(A*B)
    num = 0    