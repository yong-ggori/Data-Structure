#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int* pi;
	int idx, sum = 0;

	pi = (int*)malloc(5 * sizeof(int));
	if (pi == NULL) {
		printf("메모리가 부족합니다.\n");
		exit(1);
	}

	printf("다섯 명의 나이를 입력 하세요 : ");
	for (idx = 0; idx < 5; idx++) {
		scanf("%d", &pi[idx]);
		sum += pi[idx];
	}

	printf("다섯 명의 평균 나이 : %.2lf\n", (sum / 5.0));
	free(pi);

	return 0;
}