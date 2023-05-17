#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int** array = NULL;
	int xSize = 0, ySize = 0;

	printf("���� ��� ������ �� ���� �����ұ�� ? ");
	scanf("%d", &xSize);
	printf("���� ��� ������ �� ���� �����ұ�� ? ");
	scanf("%d", &ySize);

	// 2 ���� �迭 �޸� �Ҵ�
	array = (int**)calloc(ySize, sizeof(int*));
	for (int i = 0; i < ySize; ++i)
		// 1���� �迭 �޸� �Ҵ�
		array[i] = (int*)calloc(xSize, sizeof(int));
	
	int number = 0;
	for (int i = 0; i < ySize; ++i)
	{
		for (int j = 0; j < xSize; ++i)
		{
			array[i][j] = number++;
			printf("%d ", number);
		}
		printf("\n");
	}

	// 1 ���� �迭 �޸� ����
	for (int i = 0; i < ySize; ++i)
	{
		if (array[i])
		{
			free(array[i]);
			array[i] = NULL;
		}
	}

	// 2 ���� �迭 �޸� ����
	if (array)
	{
		free(array);
		array = NULL;
	}

	return 0;
}