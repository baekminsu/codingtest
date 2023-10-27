#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define _crt_secure_no_warnings
#pragma warning(disable:4996)

int cnt = 0;

int recursion(char* s, int l, int r) {
	cnt++;
	if (l >= r) {
		return 1;
	}
	else if (s[l] != s[r]) {
		return 0;
	}
	else {
		return recursion(s, l + 1, r - 1);
	}
}

int isPalindrome(char* input) {
	return recursion(input, 0, strlen(input)-1);
}

int main() {

	int T;
	int result;
	char input[1001];
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		getchar();
		cnt = 0;
		scanf("%s", input);
		result = isPalindrome(input);
		printf("%d %d\n", result, cnt);
	}

	return 0;
}