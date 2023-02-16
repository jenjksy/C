#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N, space, count;
	scanf("%d", &N);

	int num = N;
	for (space = 0; n != 0; n = n / 10)
	{
		space++;
	}

	if (space <= 2)
	{
		printf("%d", N);
	}
	else if (space > 2)
	{
		int a[space];
		for (int i = 100; i < N; i++)
		{
			a[2] = i % 10;
			a[1] = (i / 10) % 10;
			a[0] = (i / 100) % 10;

			if (a[2] == 0 && a[1] == 0 && a[0] == 0)
			{
				break;
			}
			else if ((a[2] - a[1]) == (a[1] - a[0]))
			{
				count++;
			}
			printf("%d", count);
		}
	}
	return 0;
}