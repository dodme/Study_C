#include <stdio.h>
#pragma warning (disable : 4996)

int Age(int year)
{
	return 2022 - year;
}

int main()
{
	int year = 0;

	printf("����⵵�� �Է��ϼ���.\n");
	scanf("%d", &year);

	printf("����� ���̴� %d�� �Դϴ�.\n", Age(year));
	
	return 0;
}