#include <stdio.h>

struct student {
	int num;
	double grade;
};

int main() {
	struct student s1;

	s1.num = 2;
	s1.grade = 2.7;
	printf("�й� : %d\n", s1.num);
	printf("���� : %.2f\n", s1.grade);
	printf("sturct size : %d\n", sizeof(s1));

	return 0;
}