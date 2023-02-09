#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, new, c=1;

	scanf("%d", &a);
	int i = a / 10;
	int j = a % 10;

	while (1)
	{
		new = j * 10 + (i + j) % 10;
		i = new / 10;
		j = new % 10;
		c++;

		if (new == a)
		{
			break;
		}

		printf("%d", c);
	}

	return 0;

}