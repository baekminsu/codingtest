def fac(N):
    if N > 1:
        return N * fac(N-1)
    else:
        return 1

print(fac(int(input())))                                             


