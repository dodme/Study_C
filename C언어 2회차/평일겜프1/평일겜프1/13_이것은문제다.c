#include <stdio.h>
#include <string.h>
#pragma warning (disable : 4996)

// num만큼 문자를 뒤로 미는 함수?
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

	printf("문자열과 정수를 입력하세요.\n");
	gets(str);
	scanf("%d", &num);

	Push(&str, num, strlen(str));
	printf("%s\n", str);

	return 0;
}