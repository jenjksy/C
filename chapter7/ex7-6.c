#include <stdio.h>

void fruit(int count);

int main(void)
{
	fruit(1);

	return 0;
}

void fruit(int count)  //호출 횟수를 함수에 저장
{
	printf("apple\n");
	if (count == 3) return; //count3번에 반환하고 끝
	fruit(count + 1); //재호출 시 호출회수 1번 증가
	printf("jam\n");
}