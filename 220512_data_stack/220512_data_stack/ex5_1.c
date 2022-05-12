#include <stdio.h>
#include "stackS.h"

int main() {
	element item;
	printf("\n** ���� ���� ���� **\n");
	printStack();
	push(1);
	printStack();
	push(2);
	printStack();
	push(3);
	printStack();

	item = peek();
	printStack();
	printf("\tpeek => %d", item);

	item = pop();
	printStack();
	printf("\tpop => %d", item);

	item = pop();
	printStack();
	printf("\tpop => %d", item);

	item = pop();
	printStack();
	printf("\tpop => %d", item);

	getchar();
	return 0;
}