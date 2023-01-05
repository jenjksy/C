#include<stdio.h>

int main(void)
{
	int a = 10, b = 20, res;

	res = (a > b) ? a : b;
	printf("%d\n", res);

	return 0;
}