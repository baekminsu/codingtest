K = int(input())
stack = []
for i in range (K):
    N = int(input())
    if N != 0 :
        stack.append(N)
    else :
        stack.pop()

print(sum(stack))