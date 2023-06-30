#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define test 1000

#define _crt_secure_no_warnings
#pragma warning(disable:4996)  // swea 에서 이거쓰면 오류남 c++ 지원하고 c언어 선택란없음

int main() {

	int T;
	scanf("%d", &T);
	int testcastNum;
	int studentscore[test];
	int input;
	int find[test];
	int find2[test];
	int temp;
	int index = 0; // 매초기화
	int cnt = 0; // 매초기화
	int maxCnt = 0;
	int maxcntarr[test];
	int maxNum;
	for (int i = 0; i < T; i++) {
		cnt = 1;
		index = 0;
		scanf("%d\n", &testcastNum);
		for (int j = 0; j < test; j++) {
			scanf("%d", &input);
			studentscore[j] = input;
		}
		for (int j = 0; j < test; j++) {
			find[j] = 101;
			find2[j] = 4444;
			maxcntarr[j] = 4444;
		}
		for (int j = 0; j < test; j++) {
			temp = studentscore[j];
			if (temp == 101) {
				continue;
			}
			else if (temp != 101) {
				cnt = 1;
			}
			for (int k = j+1; k < test; k++) {
				if (temp == studentscore[k]) {
					cnt++;
					studentscore[k] = 101;
				}
			}
			find[index] = temp;
			find2[index] = cnt;
			index++;
		}

		if (find2[0] != 4444) {
			maxCnt = find2[0];
		}
		for (int j = 0; j < test; j++) {
			if (find2[j] != 4444) {
				if (maxCnt < find2[j]) {
					maxCnt = find2[j];
				}
			}
		}
		index = 0;

		for (int j = 0; j < test; j++) {
			if (maxCnt == find2[j]) {
				maxcntarr[index] = j; //maxcntarr 에 find2에 인덱스값저장 find[mascntarr[N]] 하면 값나옴
				index++;
			}
		}
		if (maxcntarr[0] != 4444) {
			maxNum = find[maxcntarr[0]];
		}
		for (int j = 0; j < test; j++) { //이제 maxcntarr에는 최빈수 cnt에 큰값을찾아야함
			if (maxcntarr[j] != 4444) {
				if (maxNum < find[maxcntarr[j]]) {
					if (find[maxcntarr[j] != 101]) {
						maxNum = find[maxcntarr[j]];
					}
				}
			}
		}

		//for (int j = 0; j < test; j++) { // find find2 값 뽑아보기
		//	if (find[j] != 101 ) {
		//		printf("%d %d\n\n\n", find[j], find2[j]);
		//	}
		//}
		//for (int j = 0; j < test; j++) { 
		//	if (maxcntarr[j] != 4444) {
		//		printf("\n\n\n%d\n\n",maxcntarr[j]);
		//	}
		//}

		printf("#%d %d\n", testcastNum, maxNum);
	}
	return 0;
}
/*
1
1
10 8 7 2 2 4 8 8 8 9 5 5 3
*/