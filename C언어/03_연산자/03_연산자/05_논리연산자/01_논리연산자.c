#include <stdio.h>

// ��������
/// - ���� �������� �̷������ �������� �ǿ������� �����ڸ� �ǹ��մϴ�.

/// - && : AND ������
///   - �ǿ����ڷ� ���� �� ���� �������� ��� 1�̿��� �� ����� 1 �� �˴ϴ�.
/// - || : OR  ������
///   - �ǿ����ڷ� ���� �� ���� �������� �ϳ��� 1 �̶�� �� ����� 1 �� �˴ϴ�.
/// - !  : NOT ������
///   - �ǿ������� �������� �ݴ�� �������ϴ�.

int main()
{
	int check1 = 1 && 1;
	printf("check1 = %d \n", check1);

	int check2 = (10 > 50) && check1;
	printf("check2 = %d \n", check2);

	int check3 = check1 || check2;
	printf("check3 = %d \n", check3);

	int check4 = (50 > 40) || (1 && (100 <= 200)) || check1;
	printf("check4 = %d \n", check4);

	int check5 = !check4;
	printf("check5 = %d \n", check5);

	return 0;
}