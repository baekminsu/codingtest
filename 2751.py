import sys

def merge(left_arr, right_arr):
    lp = 0 ; rp = 0
    temp_arr =[]

    while(lp < len(left_arr) and rp < len(right_arr)):
        if left_arr[lp] <= right_arr[rp]:
            temp_arr.append(left_arr[lp])
            lp = lp +1
        else:
            temp_arr.append(right_arr[rp])
            rp = rp +1
    temp_arr.extend(left_arr[lp:])
    temp_arr.extend(right_arr[rp:])
    return temp_arr    

def merge_sort(arr):
    if (len(arr) <= 1):
        return arr
    
    mid = len(arr) //2
    left_arr = arr[:mid]
    right_arr = arr[mid:]

    left_arr = merge_sort(left_arr)
    right_arr = merge_sort(right_arr)

    return merge(left_arr,right_arr)

N = int(sys.stdin.readline())
arr = []
arr = list(arr)

for i in range(N):
    arr.append(int(input()))

result_arr = merge_sort(arr)
for i in result_arr:
    print(i)