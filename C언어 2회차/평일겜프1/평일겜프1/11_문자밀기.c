#include <stdio.h>
#include <string.h>
#pragma warning (disable : 4996)

int main()
{
	char inputStr[256] = {0};

	printf("문자열을 입력하세요.\n");
	gets(inputStr);

	int inputNumber = 0;
	printf("얼마만큼 밀어~!?\n");
	scanf("%d", &inputNumber);

	for (int i = 0; i < strlen(inputStr); i++)
	{
		inputStr[i] += inputNumber;
		if (inputStr[i] > 'z')
			inputStr[i] = 64 + (inputStr[i] - 'z');
		else if (inputStr[i] > 'Z' && inputStr[i] < 97)
			inputStr[i] = 96 + (inputStr[i] - 'Z');

	}

	printf("%s\n", inputStr);

	return 0;
}