#include <stdio.h>
#pragma warning (disable : 4996)

int Age(int year)
{
	return 2022 - year;
}

int main()
{
	int year = 0;

	printf("출생년도를 입력하세요.\n");
	scanf("%d", &year);

	printf("당신의 나이는 %d살 입니다.\n", Age(year));
	
	return 0;
}