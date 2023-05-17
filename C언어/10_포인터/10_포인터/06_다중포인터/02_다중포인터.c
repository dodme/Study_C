#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int** array = NULL;
	int xSize = 0, ySize = 0;

	printf("가로 요소 개수를 몇 개로 지정할까요 ? ");
	scanf("%d", &xSize);
	printf("세로 요소 개수를 몇 개로 지정할까요 ? ");
	scanf("%d", &ySize);

	// 2 차원 배열 메모리 할당
	array = (int**)calloc(ySize, sizeof(int*));
	for (int i = 0; i < ySize; ++i)
		// 1차원 배열 메모리 할당
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

	// 1 차원 배열 메모리 해제
	for (int i = 0; i < ySize; ++i)
	{
		if (array[i])
		{
			free(array[i]);
			array[i] = NULL;
		}
	}

	// 2 차원 배열 메모리 해제
	if (array)
	{
		free(array);
		array = NULL;
	}

	return 0;
}