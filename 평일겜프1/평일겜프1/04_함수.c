#include <stdio.h>
#pragma warning (disable : 4996)

int Total(int kor, int eng, int math)
{
	return kor + eng + math;
}

float Average(int kor, int eng, int math)
{
	return Total(kor, eng, math) / 3.0f;
}

int HighScore(int kor, int eng, int math)
{
	int temp = (kor > eng) ? kor : eng;
	return (temp > math) ? temp : math;
}

int main()
{
	int kor = 0, eng = 0, math = 0;

	printf("ö���� ���������� �Է��ϼ���.\n");
	scanf("%d", &kor);
	printf("ö���� ���������� �Է��ϼ���.\n");
	scanf("%d", &eng);
	printf("ö���� ���������� �Է��ϼ���.\n");
	scanf("%d", &math);

	printf("\n");

	printf("ö���� ������ %d�� �Դϴ�.\n", Total(kor, eng, math));
	printf("ö���� ����� %.2f�� �Դϴ�.\n", Average(kor, eng, math));
	printf("ö���� �ְ������� %d�� �Դϴ�.\n", HighScore(kor, eng, math));

	return 0;
}



// ����
/// 1. �ְ�����
/// 2. ����ڿ��� ������ �޾ƿ� ������� ���̸� ��ȯ�ϴ�
///    �Լ��� �ۼ��ϼ���
