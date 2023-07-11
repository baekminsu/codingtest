#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define _crt_secure_no_warnings
#pragma warning(disable:4996)

int main() {

	int T;
	int max;
	int input;
	scanf("%d", &T);

	max = 0;
	for (int i = 0; i < T; i++) {
		max = 0;
		for (int j = 0; j < 10; j++) {
			scanf("%d", &input);
			if (max < input) {
				max = input;
			}
		}
		printf("#%d %d\n", i + 1, max);
	}
	return 0;
}