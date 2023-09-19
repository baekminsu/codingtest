S = input()
result = 10
present = S[0]
for i in range(1,len(S)):
    if present ==S[i]:
        result += 5
    else:
        result += 10
    present = S[i]
print(result)

    


    