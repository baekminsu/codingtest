#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define _crt_secure_no_warnings
#pragma warning(disable:4996)  // swea 에서 이거쓰면 오류남 c++ 지원하고 c언어 선택란없음
void createNine(int* num) {
	for (int i = 0; i < 9; i++) {
		num[i] = i+1;
	}
}

int checkWidth(int matrix[9][9]) {
	int num[9];
	createNine(num);
	int cnt = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			for (int k = 0; k < 9; k++) {
				if (matrix[i][j] == num[k]) {
					cnt++;
					num[k] = -1;
					break;
				}
			}
		}
		if (cnt < 9) {
			return 1;
		}
		cnt = 0;
		createNine(num);
	}
	return 0;
}

int checkHeight(int matrix[9][9]) {
	int num[9];
	createNine(num);
	int cnt = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			for (int k = 0; k < 9; k++) {
				if (matrix[j][i] == num[k]) {
					cnt++;
					num[k] = -1;
					break;
				}
			}
		}
		if (cnt < 9) {
			return 1;
		}
		cnt = 0;
		createNine(num);
	}
	return 0;
}

int checkNine(int matrix[9][9]) {
	int num[9];
	createNine(num);
	int cnt = 0;
	for (int i = 0; i < 9; i = i + 3) {
		for (int j = 0; j < 9; j = j + 3) {
			for (int k = i; k < i + 3; k++) {
				for (int m = j; m < j + 3; m++) {

					for (int p = 0; p < 9; p++) {
						if (matrix[k][m] == num[p]) {
							cnt++;
							num[p] = -1;
							break;
						}
					}

				}
			}
			if (cnt < 9) {
				return 1;
			}
			cnt = 0;
			createNine(num);
		}
	}
	return 0;
}

int main() {

	int T;
	int input;
	scanf("%d", &T);
	int matrix[9][9];
	int check = 0;

	for (int i = 0; i < T; i++) {

		for (int j = 0; j < 9; j++) {
			for (int k = 0; k < 9; k++) {
				scanf("%d", &input);
				matrix[j][k] = input;
			}
		}
		check = checkWidth(matrix);
		if (check == 1) {
			printf("#%d %d\n", i + 1, 0);
			continue;
		}
		check = checkHeight(matrix);
		if (check == 1) {
			printf("#%d %d\n", i + 1, 0);
			continue;
		}
		check = checkNine(matrix);
		if (check == 1) {
			printf("#%d %d\n", i + 1, 0);
			continue;
		}
		if (check == 0) {
			printf("#%d %d\n", i + 1, 1);
		}
	}
	return 0;
}

/*
1
7 1 4 5 8 9 2 3 6
8 5 2 3 6 4 7 1 9
3 6 9 1 7 2 8 5 4
2 3 1 9 4 6 5 7 8
6 8 5 7 3 2 9 4 1
9 4 7 8 1 5 3 6 2
1 7 8 6 9 3 4 2 5
4 2 3 1 5 8 6 9 7
5 9 6 4 2 7 1 8 3
*/