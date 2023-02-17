#ord = ordinal (순서) chr(character) 는 문자로변환

alpha = ord('z') - ord('a') +1
S = input()
alphabet = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
result = [-1] * alpha
cnt = 0

for i in range(len(S)): #baekjoon

    for j in range(len(alphabet)):

        if S[i] == alphabet[j] :

            result[j] = S.index(S[i])
            break


for i in result:
    print(i,end=" ")
            
            




