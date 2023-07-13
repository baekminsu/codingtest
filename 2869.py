A,B,V = map(int,input().split())
day = 0
day2 = 0
while(True):
    day2 +=1
    day += A
    if day >= V:
        break
    day -= B

print(day2)

