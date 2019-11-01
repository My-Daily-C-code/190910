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
		{ "고휘찬", "010-3327-0064", 24 }, // 첫번째 요소 초기화
		{ "홍승연", "010-4624-8864", 24 }, // 두번째 요소 초기화
		{ "고태민", "010-5567-7736", 7 }, // 3번째 요소 초기화
		{ "고태환", "010-6578-2398",7 } // 마지막 요소 초기화
	};
	
	int i;
	for (i = 0; i < 4; i++)
		printf("%s %s %d\n", arr[i].name, arr[i].phoneNum, arr[i].age);

	return 0;
}
// 구조체 변수를 선언함과 동시에 초기화 할 때에는 다음과 같이 중괄로를 통해서 초기화할 값을 명시 한다.