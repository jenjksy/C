#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, count, sum;
	count = 1;
	scanf("%d", &n);

	sum = n + count;
	while (count <= n)
	{
		sum = sum + count;
		count++;
	}

	printf("%d", sum);
	return 0;
}