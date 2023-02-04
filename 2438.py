#파이썬 print 줄바꿈을 없애보자
#사실파이썬은 print("AngelPlayer", end='\n') 이런걸대신해주고있다.
n = int(input())
for i in range(0,n):
    for j in range(0,i+1):
        print("*", end='')
    print(" ")    
        