#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int num = 0;

	printf("������ �Է��ϼ���.\n");
	scanf("%d", &num);

	if (num > 0)
		printf("����Դϴ�.\n");
	else if (num < 0)
		printf("�����Դϴ�.\n");
	else
		printf("0 �Դϴ�.\n");


	return 0;
}