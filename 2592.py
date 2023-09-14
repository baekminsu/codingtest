num = []
cnt = 0
max_cnt = 0
max_num = 0 
for i in range(10):
    num.append(int(input()))

avg_num = sum(num) // 10
for i in range(10):
    cnt = 0
    for j in range(i+1,10):
        if num[j] == 0:
            continue
        if num[i] == num[j] :
            cnt +=1
            num[j] = 0
    if cnt > max_cnt:
        max_cnt = cnt
        max_num = i
print(avg_num)
print(num[max_num])


