#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#define _crt_secure_no_warnings
#pragma warning(disable:4996)


int main() {

	int a, b, c, d, e, f;
	int x, y;
	int check = 0;
	int i, j;
	scanf("%d %d %d %d %d %d", &a, &b, &c, 
		&d, &e, &f);

	for (i = -999; i <= 999; i++) {
		x = i;
		for (j = -999; j <= 999; j++) {
			y = j;
			if (((a * x) + (b * y) == c) && ((d * x) + (e * y) == f)) {
				check += 1;
				break;
			}
			else {
				check = 0;
			}
		}
		if (check > 0) {
			break;
		}
	}

	printf("%d %d", x, y);

	return 0;
}