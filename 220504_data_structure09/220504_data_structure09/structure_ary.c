#include <stdio.h>	

struct address {
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};

int main() {
	struct address list[5] = {
		{"홍길동", 23, "111-1111", "울릉도 독도"},
		{"이순신", 35, "222-2222", "서울 건천동"},
		{"장보고", 19, "333-3333", "완도 청해진"},
		{"유관순", 15, "444-4444", "충남 천안"},
		{"안중근", 45, "555-5555", "황해도 해주"}
	};
	
	for (int idx = 0; idx < 5; idx++) {
		printf("%10s%5d%15s%20s\n", (list+idx)->name, (list + idx)->age, (list + idx)->tel, (list + idx)->addr);
	}

	return 0;
}