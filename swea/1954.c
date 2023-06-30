#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define _crt_secure_no_warnings
#pragma warning(disable:4996)  // swea 에서 이거쓰면 오류남 c++ 지원하고 c언어 선택란없음


int main() {

	int T, N;
	int row = 0, col = 0;
	int num = 0;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &N);
		int** arr = (int**)malloc(sizeof(int*) * N);
		for (int j = 0; j < N; j++) {
			arr[j] = (int*)malloc(sizeof(int) * N);
		}

		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				arr[j][k] = 0;
			}
		}

		while (1) {
			if (num == N * N) {
				row = 0;
				col = 0;
				num = 0;
				break;
			}
			while (1 && num != N*N) {
				if (arr[row][col] == 0) {
					num++;
					arr[row][col] = num;
					if (col < N - 1) {
						if (arr[row][col + 1] == 0) {
							col++;
						}
					}
				}
				else {
					row++;
					break;
				}
			}
			while (1 && num != N * N) {
				if (arr[row][col] == 0) {
					num++;
					arr[row][col] = num;
					if (row < N - 1) {
						if (arr[row + 1][col] == 0) {
							row++;
						}
					}
				}
				else {
					col--;
					break;
				}
			}
			while (1 && num != N * N) {
				if (arr[row][col] == 0) {
					num++;
					arr[row][col] = num;
					if (col != 0) {
						if (arr[row][col - 1] == 0) {
							col--;
						}
					}
				}
				else {
					row--;
					break;
				}
			}
			while (1 && num != N * N) {
				if (arr[row][col] == 0) {
					num++;
					arr[row][col] = num;
					if (arr[row - 1][col] == 0) {
						row--;
					}
				}
				else {
					col++;
					break;
				}
			}
		}


		printf("#%d\n", i + 1);
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				printf("%d ", arr[j][k]);
			}
			printf("\n");
		}

		for (int j = 0; j < N; j++) {
			free(arr[j]);
		}
		free(arr);
	}

	return 0;
}