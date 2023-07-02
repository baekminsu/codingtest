#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define _crt_secure_no_warnings
#pragma warning(disable:4996)  // swea 에서 이거쓰면 오류남 c++ 지원하고 c언어 선택란없음

int main() {

	int T, N;
	int input;
	int max;
	long long sum = 0;
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		sum = 0;
		scanf("%d", &N);
		int* arr = (int*)malloc(sizeof(int) * N);

		for (int j = 0; j < N; j++) {
			scanf("%d", &input);
			arr[j] = input;
		}
		max = arr[N - 1];
		for (int j = N - 2; j >= 0; j--) {
			if (max > arr[j]) {
				sum += max - arr[j];
			}
			else if (max < arr[j]) {
				max = arr[j];
				if (j != 0) {
					continue;
				}
				else if (j == 0) {
					break;
				}
			}
		}

		printf("#%d %ld\n", i + 1, sum);
		free(arr);
	}

	return 0;
}

/*
1
10
1 2 3 4 2 6 1 1 2 1
*/