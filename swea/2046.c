#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define _crt_secure_no_warnings
#pragma warning(disable:4996)  // swea 에서 이거쓰면 오류남 c++ 지원하고 c언어 선택란없음

int main() {

	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		printf("#");
	}



	return 0;
}