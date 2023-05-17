#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int num = 0;

	printf("정수를 입력하세요.\n");
	scanf("%d", &num);

	if (num > 0)
		printf("양수입니다.\n");
	else if (num < 0)
		printf("음수입니다.\n");
	else
		printf("0 입니다.\n");


	return 0;
}