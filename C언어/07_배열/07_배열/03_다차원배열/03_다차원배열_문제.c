#include <stdio.h>

// 2 ���� �迭�� �̿��Ͽ� ������ ���� ����� ����غ�����
/// 16 17 18 19 20
/// 11 12 13 14 15
///  6  7  8  9 10
///  1  2  3  4  5

int main()
{
	// ������ �迭 ����
	int my_array[4][5];
	
	// ������, ������ �迭 ���̸� ������ ����
	int size2, size1;

	size2 = sizeof(my_array) / sizeof(my_array[0]);
	size1 = sizeof(my_array[0]) / sizeof(my_array[0][0]);


	// ��ҿ� ���� �Ҵ��� �� ���� ����
	int count = 1;
	
	// �� �Է¿� for ��
	for (int i = size2 - 1; i > -1; --i)
	{
		for (int j = 0; j < size1; ++j)
			my_array[i][j] = count++;
	}

	// �� ��¿� for ��
	for (int i = 0; i < size2; ++i)
	{
		for (int j = 0; j < size1; ++j)
		{
			printf("%s%d ", ((my_array[i][j] < 10) ? " " : ""), my_array[i][j]);
		}
		printf("\n");
	}



	return 0;
}