#include <stdio.h>
#include <string.h>
#pragma warning (disable : 4996)

// ���ڿ� �Է�

int main()
{
	char inputStr[256];
	printf("����� �̸��� �Է��ϼ���~~\n");
	// scanf("%s", inputStr);

	// gets() : ���ڿ��� �Է¹޴� �Լ�, ���ڿ� �ܿ� �ٸ����� �Է¹��� ���Ѵ�
	// gets(inputStr);

	int inputNum[80];
	gets(inputNum);


	printf("%s\n", inputStr);



	return 0;
}