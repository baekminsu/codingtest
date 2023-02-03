import sys

#input() 보다 sys.stdin.readline() 이 더빠르다는것을 알려주고싶은문제

t = int(sys.stdin.readline())

for i in range(0,t):
    a,b = map(int,sys.stdin.readline().split())
    print(a+b)