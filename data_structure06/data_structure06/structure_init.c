#include <stdio.h>

struct student {
	int id;
	char name[20];
	double grade;
} s1 = { 315, "ȫ�浿", 2.4 }
, s2 = { 316, "�̼���", 3.7 }
, s3 = { 317, "�������", 4.4 };

int main() {
	struct student max;

	max = s1;
	if (s2.grade > max.grade) max = s2;
	if (s3.grade > max.grade) max = s3;

	printf("�й� : %d\n", max.id);
	printf("�̸� : %s\n", max.name);
	printf("���� : %.1f\n", max.grade);

	return 0;
}