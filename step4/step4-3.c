#define _CRT_SECRUE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N, max, min, i;
	scanf("%d", &N);

	int a[N];

	for (i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}

	max = a[0];
	min = a[0];

	for (i = 0; i < N; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
		else if (a[i] < min)
		{
			min = a[i];
		}
	
	}

	printf("%d %d", max, min);

	return 0;
}