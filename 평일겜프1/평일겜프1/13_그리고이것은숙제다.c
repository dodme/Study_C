#include <stdio.h>
#include <string.h>
#pragma warning ( disable : 4996)

void Reverse(char* str, int length)
{
	printf("�ڿ������� �̾�~\n");
	for (int i = (length - 1); i >= 0; i--)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}

void Middle(char* str, int length)
{
	printf("�߰��� �̾�~\n");
	((length % 2) == 0) ? printf("%c%c\n", str[length / 2 - 1], str[length / 2])
		: printf("%c", str[length / 2]);
}

int main()
{

	printf("���ڿ��� �Է����ּ���.\n");
	char str[256] = { 0 };
	gets(str);
	
	

	Reverse(&str, sizeof(str) / sizeof(str[0]));
	Middle(&str, strlen(str));

	return 0;
}