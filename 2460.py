subin = 0
subout = 0
result = 0
high = 0
for i in range(10):
    A,B = map(int,input().split())
    result = result - A
    result = result + B
    if high < result:
        high = result
print(high)
