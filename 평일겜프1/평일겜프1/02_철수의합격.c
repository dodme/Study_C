#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int kor = 0, eng = 0, math = 0;

	printf("ö���� ���� ���� ���� ������ �Է��ϼ���.");
	scanf("%d %d %d", &kor, &eng, &math);

	int total = kor + eng + math;

	if ((total / 3) >= 60)
		printf("�հ�\n");
	else
		printf("���հ�\n");

	

	return 0;
}