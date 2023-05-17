#pragma warning (disable : 4996)

#include <stdio.h>

int main()
{
	char myString[256];

	printf("당신이 가장 좋아하는 프로그래밍 언어는? ");
	scanf("%[^\n]s", myString);

	printf("입력 : %s \n", myString);

	return 0;
}