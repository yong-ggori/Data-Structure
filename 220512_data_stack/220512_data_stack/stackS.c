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
//������ top�� ���Ҹ� �����ϴ� ����
void push(element item) {
	if (isStackFull()) {
		printf("\n\n Stack is FULL!!\n");
		return 0;
	}
	else return stack[++top] = item;
}
//������ top�� ���Ҹ� �˻��ϴ� ����
element pop(void) {
	if (isStackEmpty()) {
		printf("\n\n Stack is Empty!!\n");
		return 0;
	}
	else return stack[top--];
}
//������ ���Ҹ� ����ϴ� ����
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