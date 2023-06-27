#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define _crt_secure_no_warnings
#pragma warning(disable:4996)  // swea 에서 이거쓰면 오류남 c++ 지원하고 c언어 선택란없음


int main() {
	int N;
	char arr2[3];
	int cnt = 0;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		// itoa(i, arr2, 10); sw에서 오류남
		sprintf(arr2, "%d", i); // itoa 대신 이거 표준라이브러리
		for (int j = 0; j < strlen(arr2); j++) {
			if (arr2[j] == '3' || arr2[j] == '6' || arr2[j] == '9') {
				cnt++;
			}
		}
		if (cnt > 0) {
			for (int j = 0; j < cnt; j++) {
				printf("-");
			}
			printf(" ");
		}
		else {
			printf("%d ", i);
		}
		cnt = 0;

	}
	return 0;
}
	
