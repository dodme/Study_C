#pragma warning (disable : 4996)
#include <stdio.h>

// ����� �Է�
/// - scanf(����, &(�ּҿ�����)����) : ������ �Է½�Ų ���� �����մϴ�.

int main()
{
	// �Է� ���� ������ ���� ����
	int myNumber;

	printf("���ڸ� �Է��ϼ��� : ");

	// myNumber �� �Է½�Ų ������ �����մϴ�.
	scanf("%d", &myNumber);

	// �Է½�Ų �����͸� ����մϴ�.
	printf("myNumber = %d \n", myNumber);

	int myVariable1;
	float myVariable2;

	printf("input int, float : ");
	scanf("%d %f", &myVariable1, &myVariable2);

	printf("myVariable1 = %d \n", myVariable1);
	printf("myVariable1 = %.4f \n", myVariable2);

	return 0;
}