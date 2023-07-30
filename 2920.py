song = list(map(int,input().split()))
check = 0
check2 = 0
check3 = 0
for i in range(len(song)-1):
    if song[i+1] == song[i]+1:
        check+=1
    elif song[i] -1 == song[i+1]:
        check2 +=1
    else:
        check3 +=1

if check == 7:
    print("ascending")
elif check2 == 7:
    print("descending")
else:
    print("mixed")