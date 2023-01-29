a,b = map(int,input().split())
# 1분 = 60초 1시간 = 
a = a *60
total = a + b - 45
a = total // 60
b = total % 60
#print(total)

if a < 0 :
    a = a+ 24
    print("%d %d" %(a,b))
else :
    print("%d %d" %(a,b))

