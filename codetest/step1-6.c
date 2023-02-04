#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int year, budd;
	

	printf("년도를 입력하세요.\n");
	scanf("%d", &year);

	budd = year + 544;

	printf("불기로 %d년 입니다.", budd);

	return 0;
}