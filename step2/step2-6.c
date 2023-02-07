#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int h, m, time, pass;
	scanf("%d %d\n", &h, &m);
	scanf("%d\n", &time);

	pass = m + time;
	if ((60<pass)&&(pass<180))
	{
		pass=pass-60;
		h = h + 1;
		printf("%d %d\n", h, m);
	}
	else if ((180 < pass) && (pass < 240))
	{
		pass = pass - 120;
		h = h + 2;
		printf("%d %d\n", h, m);
	}
	else if ((240 < pass) && (pass < 360))
	{
		pass = pass - 240;
		h = h + 3;
		printf("%d %d\n", h, m);
	}
	else if ((360 < pass) && (pass < 480))
	{
		pass = pass - 360;
		h = h + 4;
		printf("%d %d\n", h, m);
	}
	else
	{
		m=pass;
		printf("%d %d\n", h, m);
	}
	return 0;
}