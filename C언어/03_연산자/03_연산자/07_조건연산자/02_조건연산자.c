// int ���� ���� num1 �� num2 �� ����� �Է��� ���� ���� �Է��ϰ�
// � ���� �� ū�� �˻��Ͽ� ū ���� ���� ���� ����غ�����!

// input
/// - num1 �� �Է��ϼ��� : 10
/// - num2 �� �Է��ϼ��� : 20

// output
/// - ū ���� 20 �Դϴ�.
/// - ���� ���� 10 �Դϴ�.
 

#include <stdio.h>
#pragma warning (disable : 4996)
#include <Windows.h>

int main()
{
	int num1, num2;
	printf("num1 �� �Է��ϼ��� : ");
	scanf("%d", &num1);
	printf("num2 �� �Է��ϼ��� : ");
	scanf("%d", &num2);

	printf("ū ���� %d �Դϴ� \n", max(num1, num2));
	printf("���� ���� %d �Դϴ� \n", min(num1, num2));

	/*printf("ū ���� %d �Դϴ� \n", ((num1 > num2) ? num1 : num2));
	printf("���� ���� %d �Դϴ� \n", ((num1 < num2) ? num1 : num2));*/
	
	return 0;
}