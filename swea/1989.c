#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define _crt_secure_no_warnings
#pragma warning(disable:4996)  // swea 에서 이거쓰면 오류남 c++ 지원하고 c언어 선택란없음A

int checkPalindrome(char* str) { // leval
	int i, j;

	if (strlen(str) % 2 == 0) {
		for (i = 0, j = strlen(str) - 1; i < (strlen(str) / 2) - 1; i++, j--) {
			if (str[i] != str[j]) {
				return 0;
			}
		}
	}
	else if (strlen(str) % 2 == 1) {
		for (i = 0, j = strlen(str) - 1; i < (strlen(str) / 2); i++, j--) {
			if (str[i] != str[j]) {
				return 0;
			}
		}
	}
	return 1;
}

int main() {

	int T;
	int result;
	char str[11];
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		result = 0;
		getchar();
		scanf("%s", str);
		result = checkPalindrome(str);		
		printf("#%d %d\n", i + 1, result);
	}

	return 0;
}

/*
11
level
samsung
eye
exo
ioi
blackpink
hannah
B1A4
linetown
nursesrun
leval
*/