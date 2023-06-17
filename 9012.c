#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#define _crt_secure_no_warnings
#pragma warning(disable:4996)

typedef struct Stack {
	int top;
	char input[51];
}Stack;

void push(Stack* s) {
	if (s->top > 51) {
		return;
	}
	s->top++;
	s->input[s->top] = '(';
}

int pop(Stack* s) {
	if (s->top <= -1) {
		return 1;
	}
	s->top--;

	if (s->input[s->top+1] == '(') {
		return 0;
	}
	else {
		return 1;
	}

}

int main() {

	int T;
	char input[51];
	Stack s;
	int check = 0;
	scanf("%d", &T);

	s.top = -1;

	for (int i = 0; i < T; i++) {
		check = 0;
		getchar();
		scanf("%s", input);
		for (int j = 0; j < strlen(input); j++) {
			if (input[j] == '(') {
				push(&s);
			}
			else if (input[j] == ')') {
				check = pop(&s);
				if (check == 1) {
					printf("NO\n");
					check++;
					break;
				}
			}
		}
		if (check == 0) {
			printf("YES\n");
		}


	}


	return 0;
}