#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int count, i = 0, case;

	scanf("%d", &count);
	int a[count], b[count];

	while (i < count)
	{
		scanf("%d%d", &a[i], &b[i]);
		printf("Case #%d : %d + %d = %d\n",i, a[i], b[i]  a[i] + b[i]);
		i++;
	}

	return 0;
}