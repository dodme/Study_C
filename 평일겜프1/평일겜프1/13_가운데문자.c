#include <stdio.h>
#include <string.h>
#pragma warning (disable : 4996)


int main()
{
	char inputStr[256] = { 0 };

	printf("문자열을 입력하세요.\n");
	gets(inputStr);

	if (strlen(inputStr) % 2 == 0)
	{
		//짝수
		printf("%c", inputStr[(strlen(inputStr) / 2) - 1]);
		printf("%c", inputStr[strlen(inputStr) / 2]);
	}
	else if (strlen(inputStr) % 2 == 1)
	{
		//홀수
		printf("%c", inputStr[strlen(inputStr) / 2]);
	}



	return 0;
}