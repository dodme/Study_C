#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	char inputStr[256] = { 0 };

	printf("문자열을 입력하세요.\n");
	gets(inputStr);
	
	char* pStr = inputStr;

	/*for (int i = strlen(inputStr) - 1; i >= 0; i--)
		printf("%c", inputStr[i]);*/

	while (*pStr)
	{
		pStr++;
	}

	pStr--;

	for (int i = 0; i < strlen(inputStr); i++)
	{
		printf("%c", *pStr);
		pStr--;
	}


	return 0;
}