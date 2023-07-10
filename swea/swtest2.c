#include <stdio.h>
#include <stdlib.h>
#define _crt_secure_no_warnings
#pragma warning(disable:4996)  // swea 에서 이거쓰면 오류남 c++ 지원하고 c언어 선택란없음

int main() {

	int TC;
	int N, M, Q;
	int virus;
	int index, max;

	scanf("%d", &TC);

	for (int i = 0; i < TC; i++) {

		int** matrix;
		long long result = 0;
		scanf("%d %d %d", &N, &M, &Q);
		matrix = (int**)malloc(sizeof(int*) * N);
		for (int j = 0; j < N; j++) {
			matrix[j] = (int*)malloc(sizeof(int) * M);
		}

		for (int j = 0; j < N; j++) {
			for (int k = 0; k < M; k++) {
				scanf("%d", &virus);
				matrix[j][k] = virus;
			}
		}

		for (int j = 0; j < Q; j++) {
			int r, c, x;
			scanf("%d %d %d", &r, &c, &x);
			r = r - 1;
			c = c - 1;
			matrix[r][c] = x;

			int cnt = 0;
			for (int k = 0; k < N; k++) {
				max = matrix[k][0];
				cnt = 0;
				for (int p = 0; p < M; p++) {
					if (max < matrix[k][p]) {
						max = matrix[k][p];
						index = p;
					}
				}
				max = matrix[k][index];
				for (int p = 0; p < N; p++) {
					if (max < matrix[p][index]) {
						cnt++;
						break;
					}
				}
				if (cnt == 0) {
					result++;
				}
			}
		}
		printf("#%d %lld\n", i + 1, result);
		for (int j = 0; j < N; j++) {
			free(matrix[j]);
		}
		free(matrix);

	}
	return 0;
}
/*
1
2 3 3
1 4 3
6 5 2
2 2 10
1 3 5
2 2 20
*/