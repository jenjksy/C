#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a[3], b[3];
	int num1, num2, num3;

	scanf("%d%d%d\n", &a[0], &a[1], &a[2]);

	scanf("%d%d%d\n", &b[0], &b[1], &b[2]);

	num1 = (a[0] * 100 + a[1] * 10 + a[2]) * b[2];
	num2 = (a[0] * 100 + a[1] * 10 + a[2]) * b[1];
	num3 = (a[0] * 100 + a[1] * 10 + a[2]) * b[0];

	printf("%d\n", num1);
	printf("%d\n", num2);
	printf("%d\n", num3);
	printf("%d\n", num1 + (num2 * 10) + (num3 * 100));

	return 0;

}