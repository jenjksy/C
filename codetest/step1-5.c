#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	int sum, diff, mul, dif;

	printf("�� ������ �Է��ϼ���");
	scanf("%d%d", &a, &b);

	sum = a + b;
	diff = a - b;
	mul = a * b;
	dif = a % b;

	printf("%d, %d, %d, %d", sum, diff, mul, dif);

	return 0;
}
