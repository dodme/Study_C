#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int kor = 0;
	int eng = 0;
	int math = 0;
	int total = (kor + eng + math);
	int average = (kor + eng + math) / 3;

	printf("���������� �Է��ϼ���. \n");
	scanf("%d", &kor);
	printf("���������� �Է��ϼ���. \n");
	scanf("%d", &eng);
	printf("���������� �Է��ϼ���. \n");
	scanf("%d", &math);

	printf("���������� %d �� �Դϴ�.\n", kor);
	printf("���������� %d �� �Դϴ�.\n", eng);
	printf("���������� %d �� �Դϴ�.\n", math);

	printf("������ ���� %d�Դϴ�.\n", total);
	printf("��������� %d�Դϴ�.\n", average);


	return 0;
}