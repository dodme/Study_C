#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int score = 0;

	printf("ö���� ���������� �Է��ϼ���.\n");
	scanf("%d", &score);

	if (score > 100 || score < 0)
		printf("0 ~ 100 ������ ������ �Է��ϼ���.\n");
	else if (score >= 95)
		printf("A+\n");
	else if (score >= 90)
		printf("A\n");
	else if (score >= 85)
		printf("B+\n");
	else if (score >= 80)
		printf("B\n");
	else if (score >= 75)
		printf("C+\n");
	else if (score >= 70)
		printf("C\n");
	else if (score >= 65)
		printf("D+\n");
	else if (score >= 60)
		printf("D\n");
	else
		printf("�����\n");


	return 0;
}