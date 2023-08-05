train = 0
max_train = 0
for i in range(4):
    out,board = map(int,input().split())
    train = train - out
    train = train + board
    if train > max_train:
        max_train = train

print(max_train)