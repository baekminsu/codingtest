import sys

N = int( sys.stdin.readline().rstrip() )
cnt = -1
plug = []
for i in range(N):
    plug.append(int( sys.stdin.readline().rstrip() ))
    cnt +=1

print(sum(plug)-cnt)