#include <stdio.h>


int main()
{
	// 숙제1번
	int arrNum[4][5];

	int count = 0;

	for (int i = 0; i < (sizeof(arrNum) / sizeof(arrNum[0])); i++)
	{
		for (int j = 0; j < (sizeof(arrNum[0]) / sizeof(arrNum[0][0])); j++)
		{
			count++;
			arrNum[i][j] = count;
			printf((count < 10) ? "  %d" : " %d", arrNum[i][j]);
		}
		printf("\n");
	}

	printf("\n\n");

	// 숙제2번 (야매로 풀었음)
	int arrNum2[4][5];

	int count2 = 15;

	for (int i = 0; i < (sizeof(arrNum2) / sizeof(arrNum2[0])); i++)
	{
		for (int j = 0; j < (sizeof(arrNum2[0]) / sizeof(arrNum2[0][0])); j++)
		{
			count2++;
			arrNum2[i][j] = count2;
			printf((count2 < 10) ? "  %d" : " %d", arrNum2[i][j]);
		}
		count2 -= 10;
		printf("\n");
	}
	
	return 0;
}