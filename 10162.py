T = int(input())
A = 300
B = 60
C = 10
A_cnt = 0
B_cnt = 0
C_cnt = 0
while (T // A) != 0 :
    A_cnt = T// A
    T = T % A
while (T // B) != 0 :
    B_cnt = T// B
    T = T % B
while (T // C) != 0 :
    C_cnt = T// C
    T = T % C

if A != 0 and B != 0 and C != 0 and T == 0:
    print("%d %d %d"%(A_cnt,B_cnt,C_cnt))
elif T > 0 :
    print("-1")