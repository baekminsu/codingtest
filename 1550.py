N = input()
result = 0 
hexa = 1
for i in range(len(N)-1,-1,-1):
    if N[i] == 'A':
        num = 10
    elif N[i] == 'B':
        num = 11
    elif N[i] == 'C':
        num = 12
    elif N[i] == 'D':
        num = 13
    elif N[i] == 'E':
        num = 14
    elif N[i] == 'F':
        num = 15
    else:
        num = int(N[i])
    result += num *hexa
    hexa *= 16
print(result)