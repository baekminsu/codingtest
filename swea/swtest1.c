#include <stdio.h>

#define _crt_secure_no_warnings
#pragma warning(disable:4996)  // swea 에서 이거쓰면 오류남 c++ 지원하고 c언어 선택란없음
#define MAX_STUDENT 400
#define true 1
#define false 0

void dfs(int N, int start, int nowC, int graph[MAX_STUDENT][MAX_STUDENT], int arr[MAX_STUDENT],int manyN,int* resultC) {
	arr[N] = 1;
	for (int i = 0; i < manyN; i++) {
		if (graph[N][i] > 0) {
			if (i == start && nowC + graph[N][i] < *resultC) {
				*resultC = nowC + graph[N][i];
			}

			if ((arr[i] == 0) && nowC + graph[N][i] < *resultC) {
				dfs(i, start, nowC + graph[N][i], graph, arr, manyN, resultC);
			}
		}
	}
	arr[N] = 0;
}


int main() {

	int T;
	int N, M;
	int X, Y, C;
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		int graph[MAX_STUDENT][MAX_STUDENT] = { {0} };
		scanf("%d %d", &N, &M); // N은 학생의수 M은 마니또 관계의수

		if ((N >= 2 && N <= 400) && (2 <= M <= N * (N - 1))) {
			for (int j = 0; j < M; j++) {
				scanf("%d %d %d", &X, &Y, &C);
				graph[X-1][Y-1] = C;
			}
		}
		else {
			printf("-1");
			continue;
		}

		int min = 10001;
		
		for (int j = 0; j < N; j++) {
			int arr[MAX_STUDENT] = { 0, };;
			dfs(j, j, 0, graph, arr, N, &min);
		}
		if (min == 10001) {
			printf("-1");
		}
		else {
			printf("#%d %d", i + 1, min);
		}


		return 0;
	}

}
/*
1      
3 4    
1 2 1  
3 2 1  
1 3 5
2 3 2

answer #1 3
*/