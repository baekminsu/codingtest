#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define _crt_secure_no_warnings
#pragma warning(disable:4996)  // swea 에서 이거쓰면 오류남 c++ 지원하고 c언어 선택란없음


int main() {

	int T;
	scanf("%d", &T);
	double sum = 0;
	int input;
	for (int j = 0; j < T; j++) {
		sum = 0;
		for (int i = 0; i < 10; i++) {
			scanf("%d", &input);
			sum += input;
		}
		sum = sum / 10;
		printf("#%d %.0lf\n",j+1,sum);
	}

	return 0;
}