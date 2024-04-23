def solution(answers):

    answer = []
    fir = 1
    sec = 1
    thr = [3,3,1,1,2,2,4,4,5,5]
    thr2 = 0
    
    firans = 0
    secans = 0
    thrans = 0
    
    for i in range(len(answers)):
        if fir >= 6:
            fir = 1
        if answers[i] == fir:
            firans += 1
        fir +=1
                
    for i in range(len(answers)):
        if i% 2 == 0:
            if answers[i] == 2:
                secans +=1
        else:
            if sec > 5:
                sec =1
            if sec == 2:
                sec +=1
            if answers[i] == sec:
                secans +=1
            sec+=1
                    
    for i in range(len(answers)):      
        if thr2 >= 9:
            thr2 = 0
        if answers[i] == thr[thr2]:
            thrans +=1
        thr2 +=1
        
    s = max(firans,secans,thrans)
    if firans == s:
        answer.append(1)
    if secans ==s:
        answer.append(2)
    if thrans == s:
        answer.append(3)
        
    
    
    return answer
