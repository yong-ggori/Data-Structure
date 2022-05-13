#include "cQueueS.h"

int main() {
	QueueType* cQ = createCQueue();
	element data;

	printf("\n***** 원형 큐 연산 *****\n");
	printf("\n삽입 A >>");
	enCQueue(cQ, 'A');
	printCQ(cQ);
	printf("\n삽입 B >>");
	enCQueue(cQ, 'B');
	printCQ(cQ);
	printf("\n삽입 C >>");
	enCQueue(cQ, 'C');
	printCQ(cQ);
	
	data = peekCQ(cQ);
	printf("\tpeek item : %c\n", data);

	printf("\n 삭제 >>");
	data = deCQueue(cQ);
	printCQ(cQ);
	printf("\t삭제 데이터 : %c", data);
	printf("\n 삭제 >>");
	data = deCQueue(cQ);
	printCQ(cQ);
	printf("\t\t삭제 데이터 : %c", data);
	printf("\n 삭제 >>");
	data = deCQueue(cQ);
	printCQ(cQ);
	printf("\t\t삭제 데이터 : %c", data);

	printf("\n삽입 D >>");
	enCQueue(cQ, 'D');
	printCQ(cQ);
	printf("\n삽입 E >>");
	enCQueue(cQ, 'E');
	printCQ(cQ);

	getchar();
	return 0;
}