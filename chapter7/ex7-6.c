#include <stdio.h>

void fruit(int count);

int main(void)
{
	fruit(1);

	return 0;
}

void fruit(int count)  //ȣ�� Ƚ���� �Լ��� ����
{
	printf("apple\n");
	if (count == 3) return; //count3���� ��ȯ�ϰ� ��
	fruit(count + 1); //��ȣ�� �� ȣ��ȸ�� 1�� ����
	printf("jam\n");
}