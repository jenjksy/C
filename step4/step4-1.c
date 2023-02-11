#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N, v, num = 0, i;
	scanf("%d", &N);

	int a[N];

	for (i = 0, i < N, i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &v);

	for (i = 0, i < n, i++)
	{
		if (v == a[i])
		{
			num++;
		}
	}
	printf("%d", num);

	return 0;
}