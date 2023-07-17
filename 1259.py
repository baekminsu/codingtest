S = input()
while(1):
    check = 0
    lastS = len(S) -1
    if len(S) == 1:
        check = 0
    elif len(S) ==2:
        if S[0] == S[1]:
            check = 0
        elif S[0] != S[1]:
            check +=1
    elif ((len(S) %2) == 0) or ((len(S) % 2) == 1):
        for i in range(len(S) // 2):
            if S[i] != S[lastS]:
                check+=1
                break
            lastS -=1
    if check > 0:
        print("no")
    elif check == 0:
        print("yes")
    S = input()
    if int(S) == 0:
        break