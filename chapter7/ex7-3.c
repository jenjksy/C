#include <stdio.h>

void print_char(char ch, int count); //함수 선언, int 함수이름 대신 void 함수이름

int main(void)
{
	print_char('@', 5);

	return 0;
}

void print_char(char ch, int count)
{
	int i;

	for (i = 0; i < count; i++)
	{
		printf("%c", ch);  //'문자'출력이라서 char,c/ 문자열 s
	}

	return;
}