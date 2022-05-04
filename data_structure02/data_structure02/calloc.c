#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int* pi;
	int size = 5;
	int count = 0;

	int num;
	
	pi = (int*)calloc(size, sizeof(int)); //4바이트, size 갯수 만큼 저장공간 생성
	while (1) {
		printf("양수만 입력하세요 => ");
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