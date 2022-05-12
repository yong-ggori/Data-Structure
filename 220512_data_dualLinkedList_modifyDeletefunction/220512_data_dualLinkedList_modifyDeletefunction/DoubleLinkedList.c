#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "DoubleLinkedList.h"

linkedList_h* createLinkedList_h(void) {
	linkedList_h* DL;
	DL = (linkedList_h*)malloc(sizeof(linkedList_h));
	DL->head = NULL;
	return DL;
}
void printList(linkedList_h* DL) {
	listNode* p;
	printf(" DL = (");

	p = DL->head;
	while (p != NULL) {
		printf("%s", p->data);
		p = p->rlink;
		if (p != NULL) printf(", ");
	}
	printf(") \n");
}
void insertNode(linkedList_h* DL, listNode* pre, char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	if (DL->head == NULL) {
		newNode->rlink = NULL;
		newNode->llink = NULL;
		DL->head = newNode;
	}
	else {
		newNode->rlink = pre->rlink;
		pre->rlink = newNode;
		newNode->llink = pre;
		if (newNode->rlink != NULL) newNode->rlink->llink = newNode;
	}
}
void deleteNode(linkedList_h* DL, listNode* old) {
	if (DL->head == NULL || old == NULL) return;			// 공백 리스트일 경우 혹은 삭제할 노드가 없을 경우
	else if (old->llink == NULL || old->rlink == NULL) {
		if (old->llink == NULL && old->rlink == NULL)		// 삭제할 노드가 하나인 경우
			DL->head = NULL;
		else if (old->llink == NULL) {						// 첫 번쨰 노드 삭제
			old->rlink->llink = NULL;
			DL->head = old->rlink;
		}
		else if (old->rlink == NULL)						// 마지막 노드 삭제
			old->llink->rlink = NULL;						
	}
	else {													// 중간 노드 삭제
		old->llink->rlink = old->rlink;
		old->rlink->llink = old->llink;
	}
	free(old);
}
listNode* searchNode(linkedList_h* DL, char* x) {
	listNode* temp;
	temp = DL->head;
	while (temp != NULL) {
		if (strcmp(temp->data, x) == 0) return temp;
		else temp = temp->rlink;
	}
	return temp;
}