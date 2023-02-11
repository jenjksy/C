#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, m=0, i, sum, avg;
	double a[n], new[n];
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%lf", &a[i]);
		if (a[i] > m)
		{
			m = a[i];
		}
		new[i] = a[i] / m * 100;
		sum = sum + new[i];
	}
	avg = sum / n;

	printf("%lf", avg);

	return 0;
}