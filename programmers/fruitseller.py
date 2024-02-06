def solution(k, m, score):
    answer = 0
    score.sort()
    print(score)
    for i in range(len(score)-m,-1,-m):
        if i <= (len(score)-m):
            answer += m *score[i]       
    return answer