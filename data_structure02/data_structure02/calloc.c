#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int* pi;
	int size = 5;
	int count = 0;

	int num;
	
	pi = (int*)calloc(size, sizeof(int)); //4����Ʈ, size ���� ��ŭ ������� ����
	while (1) {
		printf("����� �Է��ϼ��� => ");
		scanf_s("%d", &num);
		if (num <= 0)break;
		if (count == size) {
			size += 5;
			pi = (int*)realloc(pi, size * sizeof(int));
		}
		pi[count++] = num;
	}
	for (int idx = 0; idx < count; idx++) {
		printf("%5d", pi[idx]);
	}
	free(pi);

	return 0;
}