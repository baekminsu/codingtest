def solution(k, m, score):
    answer = 0
    temp =[]
    temp2 = []
    while(len(score) >= m):
        temp.append(max(score))
        score.remove(max(score))
        if len(temp) == m:
            temp2.append(temp)
            print(temp2)
            temp.clear()
    # for i in temp2: 
    #     print(i)
        # if temp2.count(i) == 1:
        #     answer += m * min(i)
        # elif temp2.count(i) > 1:
        #     save = i
        #     savecnt = temp2.count(i)
        #     answer += (m * min(i) *savecnt)
        #     for j in range(savecnt):
        #         temp2.remove(save)
    return answer