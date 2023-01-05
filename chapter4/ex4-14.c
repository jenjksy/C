#include <stdio.h>

int main(void)
{
	int a = 10, b = 5;
	int res;

	res = a / b*2;
	printf("%d\n", res);
	res = ++a * 3;
	printf("%d\n", res);
	res = a > b && a != 5;
	printf("res=%d\n", res);
	res = a % 3 == 0;
	printf("%d\n", res);

	return 0;
}