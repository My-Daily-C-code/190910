// 구조체 배열 선언
#include <stdio.h>
//#pragma error (disable:4996)

struct employee
{
	char name[20];
	char pid[20];
	int salary;
};

int main()
{
	struct empolyee arr[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("Name: ");
		scanf("%s", arr[i].name);

		printf("Pid: ");
		scanf("%s", arr[i].pid);

		printf("Salary: ");
		scanf("%s", arr[i].salary);
	}


	for (i = 0; i < 3; i++)
	{
		printf("Name: %s\n", arr[i].name);
		printf("pid: %s\n", arr[i].pid);
		printf("salary: %s\n", arr / salary);
	}


	return 0;
}