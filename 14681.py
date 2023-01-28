x = int(input())
y = int(input())

if  x > 0 and y >0 :
    result = 1
elif x < 0  and y > 0:
    result = 2
elif x< 0 and y < 0:
    result = 3
else :
    result = 4
print(result)