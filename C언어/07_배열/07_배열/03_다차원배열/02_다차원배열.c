#include <stdio.h>

int main()
{

	// 3차원 배열 선언
	int my_array[2][3][4];

	// 3 차원 배열 길이
	int size3 = sizeof(my_array) / sizeof(my_array[0]);
	
	// 1 차원 배열 길이
	int size2 = sizeof(my_array[0]) / sizeof(my_array[0][0]);
	
	// 2 차원 배열 길이
	int size1 = sizeof(my_array[0][0]) / sizeof(my_array[0][0][0]);

	printf("3 차원 배열 길이 : %d \n", size3);
	printf("2 차원 배열 길이 : %d \n", size2);
	printf("1 차원 배열 길이 : %d \n", size1);

	int count = 0;
	for (int i = 0; i < size2; ++i)
	{
		for (int j = 0; j < size2; ++j)
		{
			for (int k = 0; k < size1; ++k)
			{
				my_array[i][j][k] = ++count;
				printf("%d ", my_array[i][j][k]);
			}
			printf("\t");
		}
		printf("\n");
	}

	return 0;
}