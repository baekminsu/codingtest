A,B = map(int,input().split())

if A <B:
    result = A + (A-1)
elif A == B:
    result = A+B -1
elif A > B:
    if A-1 == B:
        result = A+B
    else:
        result = B+B+1
print(result)