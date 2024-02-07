def solution(X, Y):
    answer = 0
    Y = list(Y)
    result = []
    for i in X:
        for j in range(len(Y)):
            if i == Y[j]:
                result.append(i)
                Y[j] = 'a'

    if(len(result) == 0):
        answer = '-1'
    else:
        if len(result) == result.count('0'):
            answer = '0'
        else:
            result.sort()
            result.reverse()
    
    for i in result:
        print(int(i))

    print(result)
    return answer