#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile {
	char name[20];
	int age;
	double height;
	char* intro;
};

int main() {
	struct profile yuni;

	strcpy(yuni.name, "������");
	yuni.age = 17;
	yuni.height = 164.5;

	yuni.intro = (char*)malloc(80);
	printf("�ڱ�Ұ� : ");
	gets(yuni.intro);

	printf("�̸� : %s\n", yuni.name);
	printf("���� : %d\n", yuni.age);
	printf("Ű : %.2f\n", yuni.height);
	printf("�ڱ�Ұ� : %s\n", yuni.intro);
	free(yuni.intro);

	return 0;
}