import sys

stack = []
stack = list(stack)
while(True):
    S = sys.stdin.readline()
    S = list(S)
    stack.clear()
    error = 0
    if S[0] == '.':
        break
    for j in range(len(S)):
        if S[j] == '.':
            break
        if S[j] == '(':
            stack.append('(')
        elif S[j] == '[':
            stack.append('[')
        elif S[j] == ')':
            if not stack:
                error = -1
                break
            if stack[-1] != '(':
                error = 1
                break
            elif stack[-1] == '(':
                stack.pop()
        elif S[j] == ']':
            if not stack:
                error = -1
                break
            if stack[-1] != '[':
                error =1
                break
            elif stack[-1] == '[':
                stack.pop()

    if len(stack) == 0 and error == 0:
        print('yes')
    else :
        print('no')