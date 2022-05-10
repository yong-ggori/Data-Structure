#pragma once //헤더파일이 중복되지 않게 딱 한번만 포함되도록 지정하는 구문
//이 구문과 비슷한것이 #ifndef ?
// 단순 연결 리스트의 노드 구조를 구조체로 정의
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