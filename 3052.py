arr = []
result = []
count = 0

for i in range(10):
    arr.append(int(input()))
    result.append(arr[i] % 42)

if result.count(0) > 0:
    count = count +1

for i in range(10):
    if result[i] > 0 :
        count = count + 1
        search = result[i]
        for j in range(10):
            if search == result[j]:
                result[j] = 0

print(count)

        

