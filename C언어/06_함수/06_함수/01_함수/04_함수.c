// �л� ���� �� ���α׷��� �ۼ��Ͻÿ�.
/// - int �� ���� kor, eng, math �� ���� ����, ����, ���� ������ ����� �Է��� ����
///   ���� �Ҵ��ϰ� [������ ����], [������ ���], [�ְ� ����] �� ��ȯ�ϴ� �Լ��� �����ϸ�
///   ������ ���� �۵��ϴ� ���α׷��� �ۼ��ϼ���.

// intput
/// ���������� �Է��ϼ��� : 90
/// ���������� �Է��ϼ��� : 90
/// ���������� �Է��ϼ��� : 91

// output
/// ���� : 271��
/// ��� : 90.3334��
/// �ְ� ���� : 91��

#pragma warning ( disable : 4996 )
#include <stdio.h>

int total(int num1, int num2, int num3);
float avg(int total, int subject_number);
int high(int num1, int num2, int num3);


int main()
{
	int kor, eng, math;
	printf("���������� �Է��ϼ��� : ");
	scanf("%d", &kor);
	printf("���������� �Է��ϼ��� : ");
	scanf("%d", &eng);
	printf("���������� �Է��ϼ��� : ");
	scanf("%d", &math);


	printf("������ %d �� �Դϴ�. \n", total(kor, eng, math));
	printf("����� %.4f �� �Դϴ�. \n", avg(total(kor, eng, math), 3));
	printf("�ְ� ������ %d �� �Դϴ�. \n", high(kor, eng, math));

	return 0;								  
}											  
											  
int total(int num1, int num2, int num3)		  
{
	return num1 + num2 + num3;
}

float avg(int total, int subject_number)
{
	return ((float)total / subject_number);
}

int high(int num1, int num2, int num3)
{
	/*if (num1 >= num2 && num1 >= num3) { return num1; }
	else { return num2 >= num3 ? num2 : num3; }*/
	int temp = (num1 > num2) ? num1 : num2;
	return (temp > num3) ? temp : num3;
}