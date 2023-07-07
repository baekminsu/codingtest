#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define _crt_secure_no_warnings
#pragma warning(disable:4996)  // swea 에서 이거쓰면 오류남 c++ 지원하고 c언어 선택란없음A

void copyStringNum(char* copy,char* string ,int num) {
	for (int i = 0; i < num; i++) {
		copy[i] = string[i];
	}
	copy[num] = '\0';
}

int main() {

	char string[31];
	int T;
	int check = 0;
	int check2 = 0;
	char copy[11];
	char checkOne;
	int onecnt = 0;
	scanf("%d", &T);


	for (int i = 0; i < T; i++) {
		onecnt = 0;
		getchar();
		scanf("%s",string);
		checkOne = string[0];
		for (int j = 1; j < 30; j++) {
			if (checkOne == string[j]) {
				onecnt++;
			}
			else {
				break;
			}
		}
		if (onecnt == 29) {
			printf("#%d 1\n", i + 1);
			continue;
		}

		copyStringNum(copy, string, 10);
		for (int j = 10; j < 30; j = j + 10) {
			check = strncmp(copy, &string[j],10);
			if (check != 0) {
				break;
			}
			else {
				check2 = 10;
			}
		}
		copyStringNum(copy, string, 6);
		for (int j = 6; j < 30; j = j + 6) {
			check = strncmp(copy, &string[j],6);
			if (check != 0) {
				break;
			}
			else {
				check2 = 6;
			}
		}
		copyStringNum(copy, string, 5);
		for (int j = 5; j < 30; j = j + 5) {
			check = strncmp(copy, &string[j],5);
			if (check != 0) {
				break;
			}
			else {
				check2 = 5;
			}
		}
		copyStringNum(copy, string, 3);
		for (int j = 3; j < 30; j = j + 3) {
			check = strncmp(copy, &string[j],3);
			if (check != 0) {
				break;
			}
			else {
				check2 = 3;
			}
		}
		copyStringNum(copy, string, 2);
		for (int j = 2; j < 30; j = j + 2) {
			check = strncmp(copy, &string[j],2);
			if (check != 0) {
				break;
			}
			else {
				check2 = 2;
			}
		}
			
		printf("#%d %d\n", i + 1,check2);
	}


	return 0;
}
/*
1
SAMSUNGSAMSUNGSAMSUNGSAMSUNGSA
*/

/*
10
KOREAKOREAKOREAKOREAKOREAKOREA
SAMSUNGSAMSUNGSAMSUNGSAMSUNGSA
GALAXYGALAXYGALAXYGALAXYGALAXY
EXOEXOEXOEXOEXOEXOEXOEXOEXOEXO
B1A4B1A4B1A4B1A4B1A4B1A4B1A4B1
APINKAPINKAPINKAPINKAPINKAPINK
BLACKPINKBLACKPINKBLACKPINKBLA
TWICETWICETWICETWICETWICETWICE
REDVELVETREDVELVETREDVELVETRED
ABCABCABCABCABCABCABCABCABCABC
*/