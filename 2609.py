A , B = map(int,input().split())

if A < B:
    temp = B
    B = A
    A = temp

for i in range(1,B+1):
    if(((A % i) == 0)  and ((B % i) ==0)):
        result = i

print(result)