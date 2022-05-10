#pragma once //��������� �ߺ����� �ʰ� �� �ѹ��� ���Եǵ��� �����ϴ� ����
//�� ������ ����Ѱ��� #ifndef ?
// �ܼ� ���� ����Ʈ�� ��� ������ ����ü�� ����
typedef struct ListNode {
	char data[4];
	struct ListNode* link;
}listNode;

//linkedList_h* createLinkedList_h(void);
void freeLinkedList_h();
void printList();
void insertFirstNode(char* x);
void insertMiddleNode(listNode* pre, char* x);
void insertLastNode(char* x);
void deleteNode(listNode* p);
listNode* searchNode(char* x);
void reverse();