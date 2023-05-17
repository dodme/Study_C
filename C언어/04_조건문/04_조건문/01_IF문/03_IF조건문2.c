#include <stdio.h>
#pragma warning ( disable : 4996 )

int main()
{
	// 최저 임금
	const int RATE = 8720;

	// 일한 시간, 임금
	int hours, pay;

	printf("철수가 일한 시간을 입력하세요 :");
	scanf("%d", &hours);

	if (hours >= 20)
	{
		printf("철수는 20시간 이상을 일할 수 업습니다. \n");
	}
	// 8 시간을 초과한 경우
	else if (hours > 8)
			pay = (int)((RATE * 8) + (RATE * 1.5f * (hours - 8)));

	// 8시간을 초과하지 않은 경우
	else pay = (RATE * hours);

	if(hours<20)
		printf("철수의 임금은 %d 원 입니다. \n", pay);

	return 0;
}