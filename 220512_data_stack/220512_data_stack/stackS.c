#include <stdio.h>
#include "stackS.h"

int top = -1;

int isStackEmpty(void) {
	if (top == -1) return 1;
	else return 0;
}
int isStackFull(void) {
	if (top == STACK_SIZE - 1) return 1;
	else return 0;
}
//스택의 top에 원소를 삽입하는 연산
void push(element item) {
	if (isStackFull()) {
		printf("\n\n Stack is FULL!!\n");
		return 0;
	}
	else return stack[++top] = item;
}
//스택의 top에 원소를 검색하는 연산
element pop(void) {
	if (isStackEmpty()) {
		printf("\n\n Stack is Empty!!\n");
		return 0;
	}
	else return stack[top--];
}
//스택의 원소를 출력하는 연산
element peek(void) {
	if (isStackEmpty()) {
		printf("\n\n Stack is Empty!!\n");
		return 0;
	}
	else return stack[top];
}
void printStack(void) {
	printf("\n STACK [");
	for (int idx = 0; idx <= top; idx++)
		printf("%d", stack[idx]);
	printf("] ");
}