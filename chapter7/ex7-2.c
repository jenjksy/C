#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_num(void);  //함수 선언

int main(void)
{
	int result;

		result = get_num();
	printf("반환값: %d\n", result);
	return 0;
}

int get_num(void) //매개변수 없고 반환형만 존재하는 함수, 함수 정의
{
	int num;

	printf("양수 입력 : ");
	scanf("%d", &num);

	return num;  //입력받은 값을 반환한다
}