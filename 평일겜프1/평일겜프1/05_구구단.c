#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	// 반복문을 돌릴 변수
	int count = 1;

	int result = 0;
	printf("몇단을 출력할까요?\n");
	scanf("%d", &result);

	while(count < 10)
	{
		printf("%d X %d = %d\n", result, count, (result * count));
		count++;
	}


	return 0;
}