N,k = map(int,input().split())
x = input().split()
x = [int(i) for i in x]
x.sort()
x.reverse()
print(x[k-1])
