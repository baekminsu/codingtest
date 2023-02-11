N = int(input())
cnt = 0
sum = 0 
for i in range(N):
        N_List = list(map(int,input().split()))
        for j in range(1 ,len(N_List)):
            sum = sum + N_List[j]

        avg = sum / (len(N_List) -1)

        for j in range(1 ,len(N_List)):
            if N_List[j] > avg :
                cnt = cnt + 1

        print( "%.3f" %(  (cnt/N_List[0]) *100  ) ,end="" )
        print("%")

        cnt = 0
        sum = 0



 