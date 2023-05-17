#include <stdio.h>


int main()
{
	int count = 0;
	int arrNum[4][5] = { 0 };

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			count++;
			arrNum[i][j] = count;
			(arrNum[i][j] <= 9) ? printf("  %d", arrNum[i][j]) : printf(" %d", arrNum[i][j]);
		}
		printf("\n");
	}
	
	int count2 = 20;
	int arrNum2[4][5] = { 0 };

	for (int i = 3; i >= 0; i++)
	{
		for (int j = 4; j >= 0; j--)
		{
			count--;
			arrNum[i][j] = count;
		}
	}

	for (int i = 3; i >= 0; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d", arrNum[i][j]);
		}
		printf("\n");
	}

	return 0;
}