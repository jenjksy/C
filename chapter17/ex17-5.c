#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct vision
{
	double left;
	double right;
};

struct vision exchange(struct vision robot);

int main(void)
{
	struct vision robot;

	printf("�÷� �Է�: ");
	scanf("%lf%lf", &(robot.left), &(robot.right));
	robot = exchange(robot);
	printf("�ٲ� �÷�: %.1lf %.1lf", robot.left, robot.right);

	return 0;
}

struct vision exchange(struct vision robot)
{
	double temp;

	temp = robot.left;
	robot.right = robot.left;
	robot.right = temp;

	return robot;
}