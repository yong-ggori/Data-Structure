#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "LinkedList.h"

listNode* head = NULL; //전역변수로 선언
////공백 연결 리스트를 생성하는 연산
//linkedList_h* createLinkedList_h(void) {
//	linkedList_h* L;
//	L = (linkedList_h*)malloc(sizeof(linkedList_h));
//	L->head = NULL;		//공백 리스트이므로 NULL로 설정
//	return L;
//}
//연결 리스트의 전체 메모리를 해제하는 연산
void freeLinkedList_h() {
	listNode* p;
	while (head != NULL) {
		p = head;
		head = head->link;
		free(p);
		p = NULL;
	}
}
//연결 리스트 순서대로 출력하는 연산
void printList() {
	listNode* p;
	printf("L = (");
	p = head;
	while (p != NULL) {
		printf("%s", p->data);
		p = p->link;
		if (p != NULL) printf(", ");
	}
	printf(")\n");
}
//첫 번째 노드로 삽입하는 연산
void insertFirstNode(char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));	//삽입할 새 노드 할당
	strcpy(newNode->data, x);						//새 노드의 데이터 필드에 x 저장
	newNode->link = head;
	head = newNode;
}
//중간 노드로 삽입하는 연산
void insertMiddleNode(listNode* pre, char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	if (head == NULL) {
		newNode->link = NULL;
		head = newNode;
	}
	else if (pre == NULL) {
		newNode->link = head;
		head = newNode;
	}
	else {
		newNode->link = pre->link;
		pre->link = newNode;
	}
}
//마지막 노드로 삽입하는 연산
void insertLastNode(char* x) {
	listNode* newNode;
	listNode* temp;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	newNode->link = NULL;
	if (head == NULL) {	//현재 리스트가 공백인 경우
		head = newNode;	//새 노드를 리스트의 시작 노드로 연결
		return;
	}
	//현재 리스트가 공백이 아닌 경우
	temp = head;
	while (temp->link != NULL) temp = temp->link;	//현재 리스트의 마지막 노드를 찾음
	temp->link = newNode;							//새 노드를 마지막 노드(temp)의 다음으로 지정
}
//리스트에서 노드 p를 삭제하는 연산
void deleteNode(listNode* p) {
	listNode* pre;					//삭제할 노드의 선행자 노드를 나타낼 포인터
	if (head == NULL) return;	//공백 리스트라면 삭제 연산 중단
	if (head->link == NULL) {	//리스트에 노드가 한 개만 있는 경우
		free(head);				//첫 번째 노드를 메모리에서 해체하고
		head = NULL;				//리스트 시작 포인터를 NULL로 결정
		return;
	}
	else if (p == NULL) return;	//삭제할 노드가 없다면 삭제 연산 중단
	else {						//삭제할 노드 p의 선행자 노드를 포인터 pre를 이용해 찾음
		pre = head;
		while (pre->link != p) {
			pre = pre->link;
		}
		pre->link = p->link;	//삭제할 노드 p의 선행자 노드와 다음 노드를 연결
		free(p);				//삭제 노드의 메모리 해제
	}
}
//리스트에서 x 노드를 탐색하는 연산
listNode* searchNode(char* x) {
	listNode* temp;
	temp = head;
	while (temp != NULL) {
		if (strcmp(temp->data, x) == 0) return temp;
		else temp = temp->link;
	}
	return temp;
}
//리스트의 노드 순서를 역순으로 바꾸는 연산
void reverse() {
	listNode* p;
	listNode* q;
	listNode* r;

	p = head;
	q = NULL;
	r = NULL;

	//리스트의 첫 번째 노드부터 링크를 따라 다음 노드로 이동하면서
	//노드 간의 연결을 바꿈
	while (p != NULL) {
		r = q;
		q = p;
		p = p->link;
		q->link = r;
	}
	head = q;
}