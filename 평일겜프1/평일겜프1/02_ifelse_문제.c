#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int kor = 0, eng = 0, math = 0;

	printf("ö���� ��������, ��������, ���������� �Է��ϼ���.\n");

	scanf("%d %d %d", &kor, &eng, &math);

	float average = (float)(kor + eng + math) / 3;

	printf("ö���� ����� %.2f �Դϴ�.\n", average);

	if (average >= 60)
	{
		printf("�հ��Դϴ�.\n");
	}
	else
	{
		printf("���հ��Դϴ�.\n");
	}

	return 0;
}