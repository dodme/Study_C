// ö���� ������ �ý��ϴ�.
/// - ö���� ���������� �Է¹ް�, ����� ǥ���ϼ���
/// - ö���� ���������� 0~100�� ������ �ڿ����Դϴ�.

#pragma warning ( disable : 4996 )
#include <stdio.h>

int main()
{
	int score;
	printf("ö���� ���������� �Է��ϼ��� : ");
	scanf("%d", &score);

	if (score >= 0 && score <= 100)
	{
		if (score >= 95) { printf("A+\n"); }
		else if (score >= 90) { printf("A\n"); }
		else if (score >= 85) { printf("B+\n"); }
		else if (score >= 80) { printf("B\n"); }
		else if (score >= 75) { printf("C+\n"); }
		else if (score >= 70) { printf("C\n"); }
		else if (score >= 65) { printf("D+\n"); }
		else if (score >= 60) { printf("D\n"); }
		else { printf("F\n"); }
	}
	else
	{
		printf("\n�߸� �Է��ϼ̽��ϴ�. \n");
		printf("ö���� ���� ������ 0~100 �������� �ڿ����Դϴ�. \n");
	}


	return 0;
}