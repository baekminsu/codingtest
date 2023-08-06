N = int(input())
number = list(map(int,input().split()))
no = 0 
for i in range(len(number)):
    if number[i] == 101:
        continue
    for j in range(i+1,len(number)):
        if number[i] == number[j]:
            no+=1
            number[j] = 101

print(no)
