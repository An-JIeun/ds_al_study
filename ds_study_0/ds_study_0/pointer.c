#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	printf("입력하시오");
	scanf("%d", &num);

	if (num == 1) {
		printf("1입니다.\n");
		printf("종료");
		printf("===========");
	}
	if (num == 2) {
		printf("2입니다.");
	}

	return 0;
}