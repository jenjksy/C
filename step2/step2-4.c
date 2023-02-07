#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;

	scanf("%d %d\n", &a, &b);
	printf("(%d, %d)\n", a, b);
	if (a > 0)
	{
		if (b > 0)
		{
			printf("1");
		}
		else if (b < 0)
		{
			printf("3");
		}
	}
	else if (a <  0)
	{
		if (b > 0)
		{
			printf("2");
		}
	}
	else
	{
		printf("4");
	}

	return 0;
}