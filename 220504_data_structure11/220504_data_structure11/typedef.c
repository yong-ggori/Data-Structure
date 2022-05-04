#include <stdio.h>

struct student {
	int num;
	double grade;
};
typedef struct student Student; // struct student -> Student 로 재정의
								// #define A 10, 10 -> A 로 정의
void print_data(Student*);

int main() {
	Student s1 = { 315, 4.2 };

	print_data(&s1);

	return 0;
}

void print_data(Student* ps) {
	printf("학번 : %d\n", ps->num);
	printf("학점 : %.1lf\n", ps->grade);
}