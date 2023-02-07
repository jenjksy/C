#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int h, m, min, alarm, alarm_h, alarm_m;
	scanf("%d %d\n", &h, &m);

	if (h > 12)
	{
		h = h - 12;
	}
	else
	{
		h = h;
	}
	min = h * 60 + m;

	alarm = min - 45;
	alarm_h = alarm / 60;
	alarm_m = alarm % 60;

	printf("%d½Ã %dºÐ", alarm_h, alarm_m);
}