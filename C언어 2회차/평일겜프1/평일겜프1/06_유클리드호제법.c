#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	// �Է¹��� �� �ΰ���
	int inputNum1 = 0, inputNum2 = 0;
	// ū ���� ���� ����
	int num = 0;

	printf("�� ���� ���ڸ� �Է��ϼ���.\n");
	scanf("%d %d", &inputNum1, &inputNum2);

	// ���� ū ���� num�� ����
	if (inputNum1 > inputNum2)
		num = inputNum1;
	else if (inputNum2 >= inputNum1)
		num = inputNum2;

	// i�� num���� 1�� ���ҽ�Ű�� inputNum1, inputNum2�� ����������� 0�� ������ �� ���
	for (int i = num; i > 0; i--)
	{
		if ((inputNum1 % i) == 0)
		{
			if ((inputNum2 % i) == 0)
			{
				printf("%d", i);
				// i�� ���� ū ���� ����ߴٸ� ���α׷� ����
				break;
			}
		}
	}



	return 0;
}