// �迭�� �� ��ҿ� 1 ~ 100������ �����͸� �Ҵ��Ͽ�
// �迭�� ��ҿ� �Էµ� ���� ��� ����غ�����.

#include <stdio.h>

int main()
{
	// �迭 ����
	int my_array[100];

	// �迭 ����
	// int length = sizeof(my_array) / sizeof(my_array[0]);
	int length = sizeof(my_array) / sizeof(int);

	// �� ��ҿ� �����͸� �Ҵ��մϴ�.
	for (int i = 0; i < length; ++i)
		my_array[i] = i + 1;

	// �� ��ҿ� �Ҵ�� �����͸� ����մϴ�.
	for (int i = 0; i < length; ++i)
		printf("my_array[%d] = %d \n", i, my_array[i]);

	/*for (int i = 0; i < 100; ++i)
	{
		array_num[i] = i + 1;
	}

	for (int j = 0; j < 100; ++j)
	{
		printf("array_num[%d] = %d \n", j, array_num[j]);
	}*/

	return 0;
}