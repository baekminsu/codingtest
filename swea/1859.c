#include <stdio.h>
#include <string.h>
#include <string.h>

#define _crt_secure_no_warnings

int main() {

	int T,N;
	int i, j;
	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%d", &N);
		int *arr= (int*)malloc(sizeof(int) * N);
		for (j = 0; j < N; j++) { // 배열숫자넣는부분
			int input;
			scanf("%d", &input);
			arr[j] = input;
		}
		int max = arr[0];
		int sum = 0;
		sum += arr[0];
		for (j = 0; j < N; j++) {
			if (max < arr[j]) {
				
			}
			if (max > arr[j]) {
				sum += arr[j];
			}
		}



		free(arr);
	}



	return 0;
}