#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a[30], i, b[30];
	i = 0;

	for (i = 0; i < 28; i++)
	{
		scanf("%d", &a[i]);
		printf("%d", a[i]);
		b[i] = 1;
	}

	for (i = 0; i < 30; i++)
	{
		if (b[i] == 0)
		{
			printf("%d\n", a[i]);
		}
	}

	return 0;
}
	