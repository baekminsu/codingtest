#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define _crt_secure_no_warnings
#pragma warning(disable:4996)  // swea 에서 이거쓰면 오류남 c++ 지원하고 c언어 선택란없음

int checkNum(char* input) { // return 1 이면 오류검출 return 0 이면 오류없음
	char toNine[] = {'0','1','2','3','4','5','6','7','8','9','\0'};
	int check = 0;
	int result = 0;
	for (int i = 0; i < strlen(input); i++) {
		check = 0;
		for (int j = 0; j < strlen(toNine); j++) {
			if (input[i] == toNine[j]) {
				check++;
			}
		}
		if (check == 0) {
			return 1;
		}
	}
	return 0;
}

int checkNum2(char* input) { //input[4],[5] 00 월  input[6],[7] 00일
	if (input[4] != '0' && input[4] != '1') {
		return 1;
	}
	if (input[4] == '0') {
		if (input[5] == '0') {
			return 1;
		}
	}
	if (input[4] == '1') {
		if (input[5] != '0' && input[5] != '1' && input[6] != '2') {
			return 1;
		}
	}
	if (input[5] == '2') {
		if (input[6] != '0' && input[6] != '1' && input[6] != '2') {
			return 1;
		}
		if (input[6] == '2') {
			if (input[7] == '9') {
				return 1;
			}
		}
	}
	if (input[6] != '0' && input[6] != '1' && input[6] != '2' && input[6] != '3') {
		return 1;
	}
	if (input[4] == '0') {
		if (input[5] == '1' || input[5] == '3' || input[5] == '5' || input[5] == '7' || input[5] == '8') {
			if (input[6] == '3') {
				if (input[7] != '0' && input[7] != '1') {
					return 1;
				}
			}
		}
	}
	if (input[4] == '1') {
		if (input[5] == '0' || input[5] == '2') {
			if (input[6] == '3') {
				if (input[7] != '0' && input[7] != '1') {
					return 1;
				}
			}
		}
	}
	if (input[4] == '0') {
		if (input[5] == '4' || input[5] == '6' || input[5] == '9') {
			if (input[6] == '3') {
				if (input[7] == '1') {
					return 1;
				}
			}
		}
	}
	if (input[4] == '1') {
		if (input[5] == '1') {
			if (input[6] == '3') {
				if (input[7] == '1') {
					return 1;
				}
			}
		}
	}
	return 0;
}

int main() {

	int T;
	int check = 0;
	char input[10];
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		getchar();
		scanf("%s", input);
		if (strlen(input) != 8) { 
			printf("#%d %d", i + 1, -1);
			continue;
		}
		check = 0;
	/*	check = checkNum(input);*/
		check = checkNum2(input);
		if (check == 1) {
			printf("#%d %d\n", i + 1, -1);
		}
		else {
			printf("#%d ", i + 1);
			for (int i = 0; i <= 3; i++) {
				printf("%c", input[i]);
			}
			printf("/");
			printf("%c%c/%c%c\n", input[4], input[5], input[6], input[7]);
		}
	}

	return 0;
}