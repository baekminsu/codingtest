#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define _crt_secure_no_warnings
#pragma warning(disable:4996)

int emptystack(int* stack, int* top) {
	if (*top <= -1) {
		printf("-1\n");
		return 1; //비어있으면 1
	}
	else {
		return 0; //아니면 0
	}
}

int empty(int* stack, int* top) {
	if (*top <= -1) {
		printf("1\n");
		return 1; //비어있으면 1
	}
	else {
		printf("0\n");
		return 0; //아니면 0
	}
}

void push(int* stack, int* top,int input) {
	

		*top += 1;
		stack[*top] = input;
	
}

void pop(int* stack, int* top) {
	if (emptystack(stack, top) == 1) {
		return;
	}
	else {
		printf("%d\n", stack[*top]);
		*top -= 1;
	}
}

void ttop(int* stack, int* top) {
	if (emptystack(stack, top) == 1) {
		return;
	}
	else {
		printf("%d\n", stack[*top]);
	}
}

int main() {

	int N;
	int stack[10001];
	int input;
	int top = -1;
	int* ptop = &top;
	char command[6];
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		getchar();
		scanf("%s", command);
		if (command[0] == 'p') {
			if (command[1] == 'u') {
				scanf("%d", &input);
				push(stack,ptop,input);
			}
			else if (command[1] == 'o') {
				pop(stack, ptop);
			}
		}
		else if (command[0] == 's') {
			printf("%d\n", top + 1);
		}
		else if (command[0] == 'e') {
			empty(stack, ptop);
		}
		else if (command[0] == 't') {
			ttop(stack, ptop);
		}
	}

	return 0;
}