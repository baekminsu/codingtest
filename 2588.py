a = int(input())
b = int(input())


sum = ( ((b%100)%10) *((a%100)%10) )
sum = sum +(( (b%100)% 10) *  ( (a%100)// 10)  *10)
sum = sum + (( ((b%100)%10) *(a// 100) )  *100)
print(sum)

sum2 = ((b%100)//10) * (( a%100 )% 10)
sum2 = sum2 +(( (b%100)// 10) *  ( (a%100)// 10)  *10)
sum2 = sum2 + (( ((b%100)//10) *(a// 100) )  *100)
print(sum2)

sum3 = (b//100) * (( a%100 )% 10)
sum3 = sum3 +( ( b// 100) *  ( (a%100)// 10)  *10)
sum3 = sum3 + ( ( ((b)//100) *(a// 100) )  *100)
print(sum3)

print(sum+ (sum2*10) + (sum3*100))

