N = int(input())
time = list(map(int,input().split()))
Yresult = []
Mresult = []
for i in time:
    Yresult.append( ((i//30)+1 ) *10)
    Mresult.append( ((i//60)+1 ) *15)
Y = sum(Yresult)
M = sum(Mresult)

if Y > M :
    print("M",M)
elif Y < M:
    print("Y",Y)
else:
    print("Y M",Y)