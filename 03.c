// lintstructArray

#include <stdio.h>

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main()
{
	struct person arr[4] = 
	{
		{ "������", "010-3327-0064", 24 }, // ù��° ��� �ʱ�ȭ
		{ "ȫ�¿�", "010-4624-8864", 24 }, // �ι�° ��� �ʱ�ȭ
		{ "���¹�", "010-5567-7736", 7 }, // 3��° ��� �ʱ�ȭ
		{ "����ȯ", "010-6578-2398",7 } // ������ ��� �ʱ�ȭ
	};
	
	int i;
	for (i = 0; i < 4; i++)
		printf("%s %s %d\n", arr[i].name, arr[i].phoneNum, arr[i].age);

	return 0;
}
// ����ü ������ �����԰� ���ÿ� �ʱ�ȭ �� ������ ������ ���� �߰��θ� ���ؼ� �ʱ�ȭ�� ���� ��� �Ѵ�.