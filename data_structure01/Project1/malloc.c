#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int* pi;
	int idx, sum = 0;

	pi = (int*)malloc(5 * sizeof(int));
	if (pi == NULL) {
		printf("�޸𸮰� �����մϴ�.\n");
		exit(1);
	}

	printf("�ټ� ���� ���̸� �Է� �ϼ��� : ");
	for (idx = 0; idx < 5; idx++) {
		scanf("%d", &pi[idx]);
		sum += pi[idx];
	}

	printf("�ټ� ���� ��� ���� : %.2lf\n", (sum / 5.0));
	free(pi);

	return 0;
}