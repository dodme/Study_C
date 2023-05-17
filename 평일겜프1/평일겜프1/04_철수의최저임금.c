#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	// 일한 시간을 담을 변수
	int time = 0;
	// 최저시급
	int pay = 8720;
	
	printf("철수가 일한 시간을 입력하세요\n");
	scanf("%d", &time);

	if (time <= 24 && time >= 0)
	{
		if (time <= 8)
			printf("철수가 받을 돈은 %d원 입니다.\n", (pay * time));
		else
		{
			printf("철수가 받을 돈은 %d원 입니다.\n",
				(pay * 8) + ((int)(pay * 1.5f) * (time - 8)));
		}
	}
	else
		printf("0 ~ 24 사이의 숫자를 입력해주세요.\n");
	
	return 0;
}