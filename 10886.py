N = int(input())
one = 0
zero = 0
for i in range(N):
    pyo = int(input())
    if pyo == 1:
        one +=1
    elif pyo == 0:
        zero +=1
if one > zero:
    print("Junhee is cute!")
elif one < zero:
    print("Junhee is not cute")