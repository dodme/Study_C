#include <stdio.h>
#include <string.h>
#pragma warning (disable : 4996)


int main()
{
	char inputStr[256] = { 0 };

	printf("���ڿ��� �Է��ϼ���.\n");
	gets(inputStr);

	if (strlen(inputStr) % 2 == 0)
	{
		//¦��
		printf("%c", inputStr[(strlen(inputStr) / 2) - 1]);
		printf("%c", inputStr[strlen(inputStr) / 2]);
	}
	else if (strlen(inputStr) % 2 == 1)
	{
		//Ȧ��
		printf("%c", inputStr[strlen(inputStr) / 2]);
	}



	return 0;
}