#include <stdio.h>

struct profile {
	int age;
	double height;
};
struct student {
	struct profile pf;
	int id;
	double grade;
};

int main() {
	struct student yuni;

	yuni.pf.age = 17;
	yuni.pf.height = 164.7;
	yuni.id = 315;
	yuni.grade = 4.3;

	printf("���� : %d\n", yuni.pf.age);
	printf("Ű : %.2lf\n", yuni.pf.height);
	printf("�й� : %d\n", yuni.id);
	printf("���� : %.1lf\n", yuni.grade);
	printf("size struct : %d\n", sizeof(yuni));

	return 0;
}