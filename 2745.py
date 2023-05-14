adict ={'A':10,'B':11,'C':12,'D':13,'E':14,'F':15,'G':16,'H':17,'I':18,'J':19,'K':20,'L':21,'M':22,'N':23,'O':24,'P':25,'Q':26,'R':27,'S':28,'T':29,'U':30,'V':31,'W':32,'X':33,'Y':34,'Z':35}
NB = input().split()

N = NB[0]
B = int(NB[1])
B2 = B
sum = 0

if ord(N[len(N)-1]) >= ord('A') and ord(N[len(N)-1]) <= ord('Z') :    
    sum = sum + adict[N[len(N)-1]]
else:
    sum = sum + int(N[len(N)-1])

for i in range(len(N)-2,-1,-1):
    if ord(N[i]) >= ord('A') and ord(N[i]) <= ord('Z') :    
        sum = sum + (adict[N[i]] *B)
        B = B *B2
    else:
        sum = sum + (int(N[i]) * B)
        B = B * B2

print(sum)