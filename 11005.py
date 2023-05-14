dic ={}
result = []
for i in range((ord('Z')-ord('A'))+1):
    dic[i] = 10+i

for i in range((ord('Z')-ord('A'))+1):
    dic[i] = chr(ord('A')+i)

NB = input().split()

N = int(NB[0])
B = int(NB[1])


while ( N > 0 ):
    rest = N % B    
    if rest >= 10:
        result.append(dic[rest-10])
    else:
        result.append(rest)
    N = N // B

result.reverse()

for i in result:
    print(i,end="")