#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int king, queen, look, bi, knight;
	int n_king, n_queen, n_look, n_bi, n_knight;

	printf("�� ü�� ���� ������ �Է��ϼ���.\n");
	scanf("%d%d%d%d%d", &king, &queen, &look, &bi, &knight);

	if (king < 1)
	{
		n_king = 1;
	}
	else
	{
		n_king = 0;
	}

	if (queen < 1)
	{
		n_queen = 1;
	}
	else
	{
		n_queen = 0;
	}

	if (look < 2)
	{
		n_look = 2-look;
	}
	else
	{
		n_look = 2;
	}

	if (bi < 2)
	{
		n_bi = 2-bi;
	}
	else
	{
		n_bi = 0;
	}

	if (knight < 2)
	{
		n_knight = 2-knight;
	}
	else
	{
		n_knight = 0;
	}

	printf("�ʿ��� ŷ: %d, ��: %d, ��: %d, ���: %d, ����Ʈ: %d", n_king, n_queen, n_look, n_bi, n_knight);

	return 0;
}