#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n, i = 1, j=0, k=1;
	scanf("%d", &n);
	
	for (i <= n, i++)
	{
		for (j < n - i, j++)
		{
			printf(" ");
		}
		for (k = 1; k < i + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}