#include <stdio.h>

int sum(int x, int y); //함수선언

int main(void)
{
	int a = 10, b = 20;
	int result;

	result = sum(a, b); //함수호출
	printf("result: %d\n", result);

	return 0;
}

int sum(int x, int y) //함수정의
{
	int temp;

	temp = x + y;

	return temp;
}