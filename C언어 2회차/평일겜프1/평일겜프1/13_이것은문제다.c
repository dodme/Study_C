#include <stdio.h>
#include <string.h>
#pragma warning (disable : 4996)

// num��ŭ ���ڸ� �ڷ� �̴� �Լ�?
void Push(char* str, int num, int length)
{
	for (int i = 0; i < length; i++)
	{
		str[i] += num;
	}
}

int main()
{
	char str[256] = {0};
	int num = 0;

	printf("���ڿ��� ������ �Է��ϼ���.\n");
	gets(str);
	scanf("%d", &num);

	Push(&str, num, strlen(str));
	printf("%s\n", str);

	return 0;
}