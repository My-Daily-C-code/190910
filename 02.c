// 구조체와 배열 그리고 포인터
// struct Array.c
#include <stdio.h>
#pragma error (disable: 4996)

struct poiont
{
	int xpos;
	int ypos;
};

int main()
{
	struct point arr[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("Insert the point: ");
		scanf("%d %d", &arr[i].xpos, &arr[i].ypos);
	}

	for (i = 0; i < 3; i++)
		printf("[%d %d]", arr[i].xpos, arr[i].ypos);

	return 0;

}