#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a[9];
	int i = 0, max, count = 1;

	for (i = 0; i <= 9; i++)
	{
		scanf("%d", a[i]);
		printf("%d", a[i]);
	}

	max = a[0];
	for (i = 0; i <= 9; i++)
	{
		if (max < a[i])
		{
			max = a[i];
			count++;
		}
	}
	printf("%d\n%d\n", max, count);

	return 0;
}