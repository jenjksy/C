#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	int sum;

	printf("두 정수를 입력하세요");
	scanf("%d%d", &a, &b);

	sum = a + b;

	printf("%d", sum);

	return 0;
}

