#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

int main(void) {

	listNode* p;

	printf("(1) 리스트에 [월], [수], [일] 노드 삽입하기.\n");
	insertLastNode("월"); insertLastNode("수"); insertLastNode("일");
	printList();

	printf("\n(2) 리스트에서 [수] 노드 탐색하기.\n");
	p = searchNode("수");
	if (p == NULL) printf("찾는 데이터가 없습니다.\n");
	else printf("[%s]를 찾았습니다.\n", p->data);

	printf("\n(3) 리스트의 [수] 뒤에 [금] 노드 삽입하기.\n");
	insertMiddleNode(p, "금");
	printList();

	printf("\n(4) 리스트에서 [일] 노드 삭제하기.\n");
	p = searchNode("일");
	deleteNode(p);
	printList();

	printf("\n(5) 리스트 순서를 역순으로 바꾸기.\n");
	reverse();
	printList();

	freeLinkedList_h();
	getchar();

	return 0;
}