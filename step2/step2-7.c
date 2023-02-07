#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c, prize, max, num;
	scanf("%d %d %d\n", &a, &b, &c);

	if ((a == b)&&(b == c))
	{
		prize = 10000 + a * 1000;
	}
	else if (((a !=b)&&(b!=c))&&((a!=c)&&(c!=a)))
	{
		int max = a;
		if ((b > max) && (b >= c))
		{
			max = b;
		}
		else if ((c > max) && (c >= b))
		{
			max = c;
		}
		else;
		prize = 1000 + max * 100;
	}
	else
	{
		if (a == b)
		{
			num = a;
		}
		else if (b == c)
		{
			num = b;
		}
		else if (a == c)
		{
			num = c;
		}
		prize = 100 * num;
	}

	return 0;
}