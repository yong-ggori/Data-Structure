#include <stdio.h>

struct student {
	int num;
	double grade;
};
typedef struct student Student; // struct student -> Student �� ������
								// #define A 10, 10 -> A �� ����
void print_data(Student*);

int main() {
	Student s1 = { 315, 4.2 };

	print_data(&s1);

	return 0;
}

void print_data(Student* ps) {
	printf("�й� : %d\n", ps->num);
	printf("���� : %.1lf\n", ps->grade);
}