def d(n):
    i = n
    sum = 0

    while i > 0:  #3686
        sum = sum * 10
        sum = sum + (i %10)
        i = i // 10

    sum = sum +n
    
    print(sum)

    if n > 10:
        return 0
    else:
        return d(sum)

d(1)