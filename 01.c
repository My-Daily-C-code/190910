// ����ü ������ �ʱ�ȭ
#include <stdio.h>
#pragma error (disable: 4996)

struct point
{
	int xpos;
	int ypos;
};

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main()
{
	struct point pos = { 10, 20 };
	struct person man = { "ȫ�¿�", "010-4264-7885", 24 };
	printf("%d %d\n",pos.xpos, pos.ypos);
	printf("%s %s %d\n", man.name, man.phoneNum, man.age);

	return 0;
}