#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int n, i, score = 0, j, total = 0;
	scanf("%d", &n);
	char a[80];

	for (i = 0; i < n; i++)
	{
		scanf("%s", &a[i]);
	}
	int len = strlen(a);

	for (j = 0; j < len; j++)
	{
		if (a[j] == 'O')
		{
			score += 1;
			total += score;
		}
		else if (a[j] == 'X')
		{
			score = 0;
		}
		else if (a[j] == '\n')
		{
			break;
		}
		printf("%d\n", total);
	}

	return 0;
}