#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	int sum, diff, mul, dif;

	printf("두 정수를 입력하세요");
	scanf("%d%d", &a, &b);

	sum = a + b;
	diff = a - b;
	mul = a * b;
	dif = a % b;

	printf("%d, %d, %d, %d", sum, diff, mul, dif);

	return 0;
}
