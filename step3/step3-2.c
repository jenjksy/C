#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int count, i=0;

	scanf("%d\n", &count);
	int a[count], b[count];

	while (i < count)
	{
		scanf("%d%d", &a[i], &b[i]);
		printf("%d\n", a[i] + b[i]);
		i++;
	}

	return 0;
}