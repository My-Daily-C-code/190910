// 구조페의 정의 문제
#include <stdio.h>
#pragma error (disable: 4996)

struct employee
{
	char name[20];
	char pid[20];
	int salary;
};

int main()
{
	struct employee emp;
	printf("Name: ");
	scanf("%s", emp.name);
	printf("Personal ID: ");
	scanf("%s", emp.pid);
	printf("salary: ");
	scanf("%s", emp.salary);

	printf("Name: %s", emp.name);
	printf("Personal ID: %s\n", emp.pid);
	printf("Salary: %s\n", emp.salary);

	return 0;
}