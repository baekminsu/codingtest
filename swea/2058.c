#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define _crt_secure_no_warnings
#pragma warning(disable:4996)

int main() {

	int N;
	int sum = 0;
	scanf("%d", &N);

	while (N != 0) {
		sum += N % 10;
		N = N / 10;
	}

	printf("%d", sum);

	return 0;
}