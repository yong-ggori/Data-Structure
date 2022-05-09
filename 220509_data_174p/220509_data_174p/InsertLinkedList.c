#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include "InsertLinkedList.h"
//공백 연결 리스트를 생성하는 연산
linkedList_h* createLinkedList_h(void) {
	linkedList_h* L;
	L = (linkedList_h*)malloc(sizeof(linkedList_h));
	L->head = NULL;		//공백 리스트이므로 NULL로 설정
	return L;
}
//연결 리스트의 전체 메모리를 해제하는 연산
void freeLinkedList_h(linkedList_h* L) {
	listNode* p;
	while (L->head != NULL) {
		p = L->head;
		L->head = L->head->link;
		free(p);
		p = NULL;
	}
}
//연결 리스트 순서대로 출력하는 연산
void printList(linkedList_h* L) {
	listNode* p;
	printf("L = (");
	p = L->head;
	while (p != NULL) {
		printf("%s", p->data);
		p = p->link;
		if (p != NULL) printf(", ");
	}
	printf(")\n");
}
//첫 번째 노드로 삽입하는 연산
void insertFirstNode(linkedList_h* L, char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));	//삽입할 새 노드 할당
	strcpy(newNode->data, x);						//새 노드의 데이터 필드에 x 저장
	newNode->link = L->head;
	L->head = newNode;
}
void insertMiddleNode(linkedList_h* L, listNode* pre, char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	if (L->head == NULL) {
		newNode->link = NULL;
		L->head = newNode;
	}
	else if (pre == NULL) {
		newNode->link = L->head;
		L->head = newNode;
	}
	else {
		newNode->link = pre->link;
		pre->link = newNode;
	}
}
//마지막 노드로 삽입하는 연산
void insertLastNode(linkedList_h* L, char* x){
	listNode* newNode;
	listNode* temp;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	newNode->link = NULL;
	if (L->head == NULL) {	//현재 리스트가 공백인 경우
		L->head = newNode;	//새 노드를 리스트의 시작 노드로 연결
		return;
	}
	//현재 리스트가 공백이 아닌 경우
	temp = L->head;
	while (temp->link != NULL) temp = temp->link;	//현재 리스트의 마지막 노드를 찾음
	temp->link = newNode;							//새 노드를 마지막 노드(temp)의 다음으로 지정
}