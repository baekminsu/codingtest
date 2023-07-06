#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define _crt_secure_no_warnings
#pragma warning(disable:4996)  // swea 에서 이거쓰면 오류남 c++ 지원하고 c언어 선택란없음

int main() {

	int T;
	int N, K;
	int cnt = 0;
	int result = 0;
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		cnt = 0;
		result = 0;
		scanf("%d %d", &N, &K);
		int** matrix;
		matrix = (int**)malloc(sizeof(int*) * N);
		for (int j = 0; j < N; j++) {
			matrix[j] = (int*)malloc(sizeof(int) * N);
		}
		
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				scanf("%d", &matrix[j][k]);
			}
		}


		for (int j = 0; j < N; j++) {
			cnt = 0;
			for (int k = 0; k < N; k++) {
				if (matrix[j][k] == 1) {
					cnt++;
					if (cnt == K) {
						if (k == N - 1) {
							result++;
							cnt = 0;
							break;
						}
					}
					if (cnt == K) {
						if (matrix[j][k + 1] != 1) {
							result++;
							cnt = 0;
						}
					}
				}
				else {
					cnt = 0;
				}
			}
		}

		for (int j = 0; j < N; j++) {
			cnt = 0;
			for (int k = 0; k < N; k++) {
				if (matrix[k][j] == 1) {
					cnt++;
					if (cnt == K) {
						if (k == N - 1) {
							result++;
							cnt = 0;
							break;
						}
					}
					if (cnt == K) {
						if (matrix[k+1][j] != 1) {
							result++;
							cnt = 0;
						}
					}
				}
				else {
					cnt = 0;
				}
			}
		}

		printf("#%d %d\n", i + 1, result);

		for (int j = 0; j < N; j++) {
			free(matrix[j]);
		}
		free(matrix);
	}


	return 0;
}
/*
2
5 3
0 0 1 1 1
1 1 1 1 0
0 0 1 0 0
0 1 1 1 1
1 1 1 0 1
5 3
1 0 0 1 0
1 1 0 1 1
1 0 1 1 1
0 1 1 0 1
0 1 1 1 0
*/