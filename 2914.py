A,I = map(int,input().split())

if A > I or A == I:
    result = A *(I-1) +1
elif A < I :
    result = A * I
print(result)