S = input() #65는 'A' 알파벳개수 26개
Sum = 0
for i in S:
    if i == 'A' or i =='B' or i =='C':
        Sum = Sum +3
    elif i == 'D' or i == 'E' or i == 'F':
        Sum = Sum +4
    elif i == 'G' or i == 'H' or i == 'I':
        Sum = Sum +5
    elif i == 'J' or i == 'K' or i == 'L':
        Sum = Sum +6
    elif i == 'M' or i == 'N' or i == 'O':
        Sum = Sum +7
    elif i == 'P' or i == 'Q' or i == 'R' or i == 'S':
        Sum = Sum +8
    elif i == 'T' or i == 'U' or i == 'V':
        Sum = Sum +9
    elif i == 'W' or i == 'X' or i == 'Y' or i == 'Z':
        Sum = Sum +10
print(Sum)