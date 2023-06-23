#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#define _crt_secure_no_warnings
#pragma warning(disable:4996)


int main() {

    int N;
    int i= 2;
    int rule = 12;
    int rule2 = 8;
    int answer = 2;
    scanf("%d", &N);
    if (N == 1) {
        printf("1");
        return 0;
    }
    
    while (1) {

        if (i > N) {
            break;
        }
        if (i == rule2) {
            answer++;
            rule2 = i + rule;
            rule += 6;
        }
        i++;
    }

    printf("%d", answer);

    return 0;
}