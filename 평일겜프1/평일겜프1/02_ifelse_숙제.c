#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int num = 0;

	printf("0이 아닌 정수를 입력하세요.\n");

	scanf("%d", &num);
	
	if (num != 0)
	{
		if ((num % 2) == 0)
			printf("짝수입니다.\n");
		else
			printf("홀수입니다.\n");
	}
	else
		printf("입력한 수가 0입니다.\n");



	return 0;
}