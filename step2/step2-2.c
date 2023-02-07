#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score;

	scanf("%d\n", &score);
	printf("%d\n", score);

	if (score>90)
	{
		printf("A");
	}
	else if (80<= score && score <= 90)
	{
		printf("B");
	}
	else if (70 <= score && score <= 80)
	{
		printf("C");
	}
	else
	{
		printf("D");
	}

	return 0;
}