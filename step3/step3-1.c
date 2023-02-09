#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int n, count;
	count = 1;
	scanf("%d\n", &n);
	while (count < 10)
	{
		printf("%d * %d = %d\n", n, count, n * count);
		count = count + 1;
	}

	return 0;
}