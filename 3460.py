T = int(input())
binary =[]
for i in range(T):
    n = int(input())
    while (n > 0):
        binary.append(n % 2)
        n = n //2
    for i in range(len(binary)):
        if binary[i] == 1:
            print('{0}'.format(i),end=" " )
    binary.clear()