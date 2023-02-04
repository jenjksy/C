#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c;
	int cal1, cal2, cal3, cal4;
	printf("숫자 3개를 입력하세요.\n");
	scanf("%d%d%d\n", &a, &b, &c);

	cal1 = (a + b) % c;
	cal2 = ((a % c) + (b % c)) % c;
	cal3 = (a * b) % c;
	cal4 = ((a % c) * (b % c)) % c;

	if (cal1 == cal2)
	{
		printf("%d = %d", cal1, cal2);
	}
	else
	{
		printf("%d, %d", cal1, cal2);
	}

	if (cal3 == cal4)
	{
		printf("%d = %d", cal3, cal4);
	}
	else
	{
		printf("%d, %d", cal3, cal4);
	}

	return 0;
}