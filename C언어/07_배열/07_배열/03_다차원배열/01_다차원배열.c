#include <stdio.h>

// ������ �迭
/// - �迭�� ��ҷ� ���� �迭

int main()
{

	// 2���� �迭
	/// - [2���� ����][1���� ����] �� 2���� �迭�� ������ �� �ֽ��ϴ�.
	int my_array[3][4];
	/// [��������]
	/// [��������]
	/// [��������]

	// ������ �迭 ����
	int size2 = sizeof(my_array) / sizeof(my_array[0]);
	printf("������ �迭 ���� : %d \n", size2);

	// ������ �迭 ����
	int size1 = sizeof(my_array[0]) / sizeof(my_array[0][0]);
	printf("������ �迭 ���� : %d \n", size1);

	// �� ��ҿ� �Ҵ�� ��
	int number = 0;

	// ������ �迭�� ��ȸ�� �迭
	for (int i = 0; i < size2; ++i)
	{
		// ������ �迭�� ��ȸ�� �迭
		for (int j = 0; j < size1; ++j)
		{
			// ������ ��ҿ� ���� �Ҵ��մϴ�.
			my_array[i][j] = number++;
			printf("%d ", my_array[i][j]);
		}
		printf("\n");
	}

	return 0;
}