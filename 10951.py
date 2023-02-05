#EOF에 대해 알아보자
while True:
    try:
        if sum == '':
            break
        a,b = map(int,input().split())
        sum = a+b
        print(sum)

    except:
        break