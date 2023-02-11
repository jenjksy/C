#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a[10], b[10], c[42], i, count=0;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		printf("%d", a[i]);
		b[i] = a[i] % 42;
		c[b[i]] += 1;
	}
	for (i = 0; i < 42; i++)
	{
		if (b[i] != 0)
		{
			count++;
		}
	}
		
	printf("%d", count);

	return 0;
}