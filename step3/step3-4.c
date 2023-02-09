#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int total, buy;
	scanf("%d\n %d\n", &total, &buy);

	int a[total], b[total], sum, i=0;

	while (i < buy)
	{
		scanf("%d %d", &a[i], &b[i]);
		sum = sum + a[i] * b[i];
		i++;
	}

	if (sum == total)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}

	return 0;
}