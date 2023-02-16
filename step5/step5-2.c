#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char a[10000] = { 0 };
	int i;

	for (i = 1; i < 10000; i++)
	{
		int new_num = i + i / 10000 + (i / 1000) % 10 + (i / 100) % 10 + (i / 10) % 10 + i % 10;
		if (new_num <= 10000)
		{
			a[new_num] += 1;
		}
	}

	for (int i = 0; i < 10000; i++)
	{
		if (a[i] == 0)
		{
			printf("%d\n", i + 1);
		}
	}

	return 0;
}