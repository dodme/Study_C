#include <stdio.h>

// ������
/// + - * / %

int main()
{
	int x = 10;
	int y = 20;

	int result = 0;

	result = x + y;
	printf("���� : %d\n", result);

	result = x - y;
	printf("�E�� : %d\n", result);

	result = x * y;
	printf("���� : %d\n", result);

	// ����� ����ȯ / Casting
	result = (float)x / y;
	printf("������ : %f\n", (float)x / y);

	// ������ ����ȯ
	float f = 0;
	// ���� Ȯ��
	int n = 10.0f;
	// ���� ���

	result = x % y;
	printf("������ %% : %d\n", result);


	return 0;
}