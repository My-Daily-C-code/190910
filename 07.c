//structValAddress
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
	struct person man = { "ȫ�¿�", "010-4624-8864", 24 };

	printf("%p %p\n", &pos, &pos.xpos);
	printf("%p %p\b", &man, man.name);


	return 0;
}
// ����ü ������ �ּ� ���� ������ ������ ù��° ����� �ּ� ���� �����ϴ�.