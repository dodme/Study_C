#pragma warning (disable : 4996)

#include <stdio.h>

int main()
{
	char myString[256];

	printf("����� ���� �����ϴ� ���α׷��� ����? ");
	scanf("%[^\n]s", myString);

	printf("�Է� : %s \n", myString);

	return 0;
}