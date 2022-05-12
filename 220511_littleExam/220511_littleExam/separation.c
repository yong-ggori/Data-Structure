#include <stdio.h>

int main() {
	int number, div = 10, count = 0;
	int seperation[10]; //³ª¸ÓÁö¿Í ¸ò

	printf("for seperating number : ");
	scanf_s("%d", &number);

	while (number > 0) {
		seperation[count++] = number % div;
		number = number / div;
	}

	for (int idx = 0; idx < count; idx++) {
		printf("%5d", seperation[idx]);
		if (idx == count-1) count = 0;
	}	

	return 0;
}