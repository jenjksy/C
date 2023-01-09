#include <stdio.h>

int main(void)
{
	int a;
	int* pa;

	pa = &a; //포인터에 a의 주소 대입
	*pa = 10;

	printf("포인터로 a값 출력: %d\n", *pa);
	printf("변수명으로 a값 출력: %d\n", a);

	return 0;
}