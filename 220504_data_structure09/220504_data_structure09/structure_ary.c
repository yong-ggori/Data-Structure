#include <stdio.h>	

struct address {
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};

int main() {
	struct address list[5] = {
		{"ȫ�浿", 23, "111-1111", "�︪�� ����"},
		{"�̼���", 35, "222-2222", "���� ��õ��"},
		{"�庸��", 19, "333-3333", "�ϵ� û����"},
		{"������", 15, "444-4444", "�泲 õ��"},
		{"���߱�", 45, "555-5555", "Ȳ�ص� ����"}
	};
	
	for (int idx = 0; idx < 5; idx++) {
		printf("%10s%5d%15s%20s\n", (list+idx)->name, (list + idx)->age, (list + idx)->tel, (list + idx)->addr);
	}

	return 0;
}