#include <stdio.h>
#include <string.h>
#include <string.h>

#define _crt_secure_no_warnings
#pragma warning(disable:4996)  // swea 에서 이거쓰면 오류남 c++ 지원하고 c언어 선택란없음

int main() {

	int N;
	int input;
	int t = 1;
	int sum = 0;
	scanf("%d", &N);
	for (int i = 0; i< N; i++) {
		for (int j = 0; j < 10; j++) {
			scanf("%d", &input);
			if ((input % 2) == 1) {
				sum += input;
			}
		}
		printf("#%d %d", t, sum);
		printf("\n");
		sum = 0;
		t++;
	}

	return 0;
}