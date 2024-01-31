def solution(k, m, score):
    answer = 0
    temp =[]
    temp2 = []
    while(len(score) >= m):
        temp.append(max(score))
        score.remove(max(score))
        if len(temp) == m:
            temp2.append(temp)
            answer += (min(temp) * m)
            temp.clear()
            
    return answer