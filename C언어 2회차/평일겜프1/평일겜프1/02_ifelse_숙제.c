#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int num = 0;

	printf("0�� �ƴ� ������ �Է��ϼ���.\n");

	scanf("%d", &num);
	
	if (num != 0)
	{
		if ((num % 2) == 0)
			printf("¦���Դϴ�.\n");
		else
			printf("Ȧ���Դϴ�.\n");
	}
	else
		printf("�Է��� ���� 0�Դϴ�.\n");



	return 0;
}