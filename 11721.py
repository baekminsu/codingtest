S = input()
count = len(S)
i = 0
while (i != count):
    print('{0}'.format(S[i]),end="")
    i +=1
    if (i% 10) == 0 :
        print("")

        