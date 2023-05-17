#include <stdio.h>
#pragma warning (disable : 4996)


int main()
{
	// 홀수짝수
	/*unsigned int inputNum = 0;
	printf("Enter The Integer..\n");

	scanf("%u", &inputNum);

	if (inputNum > 0)
	{
		if (inputNum % 2 == 0)
		{
			printf("짝수\n");
		}
		else if (inputNum % 2 == 1)
		{
			printf("홀수\n");
		}

	}*/

	// 양수음수
	/*int inputNum = 0;
	printf("Enter The Integer..\n");

	scanf("%d", &inputNum);

	if (inputNum > 0)
	{
		printf("양수\n");
	}
	else if (inputNum == 0)
	{
		printf("0\n");
	}
	else if (inputNum < 0)
	{
		printf("음수\n");
	}*/
	
	//철수의 임금
	int workTime = 0;
	int pay = 8720;
	printf("일한 시간은?\n");
	scanf("%d", &workTime);

	if (workTime > 8)
	{
		workTime -= 8;
		printf("철수가 일한 시간은 %f입니다.", (pay * 8) + (workTime * (pay * 1.5f)));
	}
	else if (workTime <= 8)
	{
		printf("철수가 일한 시간은 %d입니다.", pay * workTime);
	}





	return 0;
}