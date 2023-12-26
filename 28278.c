#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996) 


int main() {

    int N;
    int com;
    int com2;
    int* stack;
    int count = -1;
    scanf("%d", &N);
    stack = (int*)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &com);
        if (com == 1) {
            scanf("%d", &com2);
            count++;
            stack[count] = com2;
        }
        else if (com == 2) {
            if (count < 0) {
                printf("-1\n");
                continue;
            }
            printf("%d\n", stack[count]);
            count--;
        }
        else if (com == 3) {
            printf("%d\n", count+1);
        }
        else if (com == 4) {
            if (count < 0) {
                printf("1\n");
            }
            else if (count >= 0) {
                printf("0\n");
            }
        }
        else if (com == 5) {
            if (count < 0) {
                printf("-1\n");
                continue;
            }
            printf("%d\n", stack[count]);
        }
    }

    free(stack);
    return 0;
}