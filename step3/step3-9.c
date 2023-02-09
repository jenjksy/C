#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n, i=1;
	scanf("%d", &n);
	while (i < n)
	{
		printf("*");
		i++;
	}
	printf("\n");

	return 0;
}