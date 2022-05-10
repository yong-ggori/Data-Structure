#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "LinkedList.h"

listNode* head = NULL; //���������� ����
////���� ���� ����Ʈ�� �����ϴ� ����
//linkedList_h* createLinkedList_h(void) {
//	linkedList_h* L;
//	L = (linkedList_h*)malloc(sizeof(linkedList_h));
//	L->head = NULL;		//���� ����Ʈ�̹Ƿ� NULL�� ����
//	return L;
//}
//���� ����Ʈ�� ��ü �޸𸮸� �����ϴ� ����
void freeLinkedList_h() {
	listNode* p;
	while (head != NULL) {
		p = head;
		head = head->link;
		free(p);
		p = NULL;
	}
}
//���� ����Ʈ ������� ����ϴ� ����
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
//ù ��° ���� �����ϴ� ����
void insertFirstNode(char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));	//������ �� ��� �Ҵ�
	strcpy(newNode->data, x);						//�� ����� ������ �ʵ忡 x ����
	newNode->link = head;
	head = newNode;
}
//�߰� ���� �����ϴ� ����
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
//������ ���� �����ϴ� ����
void insertLastNode(char* x) {
	listNode* newNode;
	listNode* temp;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	newNode->link = NULL;
	if (head == NULL) {	//���� ����Ʈ�� ������ ���
		head = newNode;	//�� ��带 ����Ʈ�� ���� ���� ����
		return;
	}
	//���� ����Ʈ�� ������ �ƴ� ���
	temp = head;
	while (temp->link != NULL) temp = temp->link;	//���� ����Ʈ�� ������ ��带 ã��
	temp->link = newNode;							//�� ��带 ������ ���(temp)�� �������� ����
}
//����Ʈ���� ��� p�� �����ϴ� ����
void deleteNode(listNode* p) {
	listNode* pre;					//������ ����� ������ ��带 ��Ÿ�� ������
	if (head == NULL) return;	//���� ����Ʈ��� ���� ���� �ߴ�
	if (head->link == NULL) {	//����Ʈ�� ��尡 �� ���� �ִ� ���
		free(head);				//ù ��° ��带 �޸𸮿��� ��ü�ϰ�
		head = NULL;				//����Ʈ ���� �����͸� NULL�� ����
		return;
	}
	else if (p == NULL) return;	//������ ��尡 ���ٸ� ���� ���� �ߴ�
	else {						//������ ��� p�� ������ ��带 ������ pre�� �̿��� ã��
		pre = head;
		while (pre->link != p) {
			pre = pre->link;
		}
		pre->link = p->link;	//������ ��� p�� ������ ���� ���� ��带 ����
		free(p);				//���� ����� �޸� ����
	}
}
//����Ʈ���� x ��带 Ž���ϴ� ����
listNode* searchNode(char* x) {
	listNode* temp;
	temp = head;
	while (temp != NULL) {
		if (strcmp(temp->data, x) == 0) return temp;
		else temp = temp->link;
	}
	return temp;
}
//����Ʈ�� ��� ������ �������� �ٲٴ� ����
void reverse() {
	listNode* p;
	listNode* q;
	listNode* r;

	p = head;
	q = NULL;
	r = NULL;

	//����Ʈ�� ù ��° ������ ��ũ�� ���� ���� ���� �̵��ϸ鼭
	//��� ���� ������ �ٲ�
	while (p != NULL) {
		r = q;
		q = p;
		p = p->link;
		q->link = r;
	}
	head = q;
}