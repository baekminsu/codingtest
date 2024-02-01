def solution(k, m, score):
    answer = 0
    temp =[]
    temp2 = []
    while(len(score) >= m):
        temp.append(max(score))
        score.remove(max(score))
        if len(temp) == m:
            temp2.append(temp)
            temp.clear()
    for i in temp2:
        if temp2.count(i) == 0:
            answer += m * min(i)
        elif temp2.count(i) > 0:
            save = i
            savecnt = temp2.count(i)
            for j in range(savecnt):
                


            
    return answer