#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

int main(void) {

	listNode* p;

	printf("(1) ����Ʈ�� [��], [��], [��] ��� �����ϱ�.\n");
	insertLastNode("��"); insertLastNode("��"); insertLastNode("��");
	printList();

	printf("\n(2) ����Ʈ���� [��] ��� Ž���ϱ�.\n");
	p = searchNode("��");
	if (p == NULL) printf("ã�� �����Ͱ� �����ϴ�.\n");
	else printf("[%s]�� ã�ҽ��ϴ�.\n", p->data);

	printf("\n(3) ����Ʈ�� [��] �ڿ� [��] ��� �����ϱ�.\n");
	insertMiddleNode(p, "��");
	printList();

	printf("\n(4) ����Ʈ���� [��] ��� �����ϱ�.\n");
	p = searchNode("��");
	deleteNode(p);
	printList();

	printf("\n(5) ����Ʈ ������ �������� �ٲٱ�.\n");
	reverse();
	printList();

	freeLinkedList_h();
	getchar();

	return 0;
}