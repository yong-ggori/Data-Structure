#include <stdio.h>

struct vision
{
	double left;
	double right;
};

struct vision exchange(struct vision); // �Լ� ���� �� �Ű����� �ڷ����� �����൵ �ȴ�.

int main() {
	struct vision robot;

	printf("�÷� �Է� : ");
	scanf_s("%lf%lf", &(robot.left), &(robot.right)); //������ �ִ� ���� �ƴϰ� �ּҿ��ٰ� scanf �� �ִ´�.
	robot = exchange(robot); // �Լ� ȣ��
	printf("�ٲ� �÷� : %.1lf  %.1lf\n", robot.left, robot.right);

	return 0;
}

struct vision exchange(struct vision robot) {// �Լ� ����
	double temp;

	temp = robot.left;
	robot.left = robot.right;
	robot.right = temp;

	return robot;
}