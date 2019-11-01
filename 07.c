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
	struct person man = { "홍승연", "010-4624-8864", 24 };

	printf("%p %p\n", &pos, &pos.xpos);
	printf("%p %p\b", &man, man.name);


	return 0;
}
// 구조체 변수의 주소 값은 구조페 변수의 첫번째 멤버의 주소 값과 동일하다.