N = list(input())
F = int(input())

ten = len(N)-2
one = len(N)-1
check = 0

for i in range(10):
    if check >0:
        break
    N[ten] = str(i)
    for j in range(10):
        if check > 0:
            break
        N[one] =str(j)
        if int(''.join(N)) % F ==0:
            check +=1
            print("%02d"%(int(N[ten]+ N[one])))