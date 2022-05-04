#include <stdio.h>

struct vision
{
	double left;
	double right;
};

struct vision exchange(struct vision); // 함수 선언 시 매개변수 자료형만 적어줘도 된다.

int main() {
	struct vision robot;

	printf("시력 입력 : ");
	scanf_s("%lf%lf", &(robot.left), &(robot.right)); //변수에 넣는 것이 아니고 주소에다가 scanf 값 넣는다.
	robot = exchange(robot); // 함수 호출
	printf("바뀐 시력 : %.1lf  %.1lf\n", robot.left, robot.right);

	return 0;
}

struct vision exchange(struct vision robot) {// 함수 정의
	double temp;

	temp = robot.left;
	robot.left = robot.right;
	robot.right = temp;

	return robot;
}