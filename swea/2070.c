#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define _crt_secure_no_warnings
#pragma warning(disable:4996)

int main() {

	int T;
	int x, y;
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d %d", &x, &y);
		if (x > y) {
			printf("#%d >",i+1);
		}
		else if (x < y) {
			printf("#%d <",i+1);
		}
		else {
			printf("#%d =",i+1);
		}
		printf("\n");
	}



	return 0;
}