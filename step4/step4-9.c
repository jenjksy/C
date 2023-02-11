#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(void)
{
	int c, n, i, sum=0, k, count=0;
	int score[n];
	scanf("%d", &c);
	printf("%d", c);

	for (i = 0; i < c; i++)
	{
		scanf("%d", &n);
		scanf("%d", &score[i]);
		printf("%d ", score[i]);
		sum += score[i];
	}
	double avg;
	avg = sum / n;

	for (k = 0; k < N; k++)
	{
		if (score[k] > avg)
		{
			count++;
		}
	}
	int percent = (count / n) * 100;
	printf("%.3lf\n", percent);

	return 0;
}