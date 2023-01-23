g = input().split()
rule = [1,1,2,2,2,8]

#for i,j in enumerate(rule): # for 인덱스, 요소 in enumerate(리스트): #enumerate는 index와 ,value값을꺼낸다

for i in range (0,6):
    if rule[i] != g[i] :
        print(int(rule[i]) - int(g[i]))
