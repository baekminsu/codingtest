a,b,c,d,e = map(int,input().split())
sum =0
sum += a*a
sum += b*b
sum += c*c
sum += d*d
sum += e*e
check = sum % 10

print(check)