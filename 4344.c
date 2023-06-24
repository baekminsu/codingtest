#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#define _crt_secure_no_warnings
#pragma warning(disable:4996)

int main() {

	int C;
	int N;
	int sum = 0;
	int score;
	int save[1001] = { 0, };
	double cnt = 0;
	double avg;
	scanf("%d", &C);
	for (int i = 0; i < C; i++) {
		sum = 0;
		cnt = 0;
		scanf("%d", &N);
		if (N == 1) {
			scanf("%d", &score);
			printf("100.000%%");
		}
		else {
			for (int j = 0; j < N; j++) {
				scanf("%d", &score);
				save[j] = score;
				sum += score;
			}
			avg = (double)sum / N;
			for (int j = 0; j < N; j++) {
				if (save[j] > avg) {
					cnt++;
				}
			}
			printf("%.3lf%%\n", (cnt / N) * 100);
		}
	}

	return 0;
}