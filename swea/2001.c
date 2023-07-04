#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define _crt_secure_no_warnings
#pragma warning(disable:4996)  // swea 에서 이거쓰면 오류남 c++ 지원하고 c언어 선택란없음A
//int test = 0;
int main() {

	int T;
	int N, M;
	int** arr;
	int input;
	int row = 0, col = 0;
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		int sum = 0;
		int max = 0;
		scanf("%d %d", &N, &M);
		arr = (int**)malloc(sizeof(int*) * N);
		for (int j = 0; j < N; j++) {
			arr[j] = (int*)malloc(sizeof(int) * N);
		}
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				scanf("%d", &input);
				arr[j][k] = input;
			}
		}

		for (int j = 0; j <= (N - M); j++) { // row move
			for (int k = 0; k <= (N - M); k++) { // col move
				row = j;
				col = k;
				sum = 0;
				for (int l = 0; l < M; l++) {
					for (int p = 0; p < M; p++) {
						sum += arr[row + l][col + p];
					}
				}
				//printf("Test #%d %d\n\n\n", test, sum);
				//test++;
				if (sum > max) {
					max = sum;
				}
			}
		}

		printf("#%d %d\n", i + 1, max);

		for (int j = 0; j < N; j++) {
			free(arr[j]);
		}
		free(arr);
	}

	return 0;
}

/*
1
5 2
1 3 3 6 7
8 13 9 12 8
4 16 11 12 6
2 4 1 23 2
9 13 4 7 3
*/