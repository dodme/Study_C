#include <stdio.h>

// ����
/// * 
/// * * 
/// * * * 
/// * * * *
/// * * * * *

int main()
{
	// 1�� ����
	for (int i = 1; i < 6; i++)
	{
		for (int j = 0; j < i; j++)
			printf("* ");
		printf("\n");
	}

	// Ǯ��
	for (int i = 1; i < 6; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	printf("\n");

	// 2�� ����
	for (int i = 5; i > 0; i--)
	{
		for (int j = 6; j > 1; j--)
			printf("* ");
		printf("\n");
	}

	// Ǯ��
	for (int i = 5; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	printf("\n");

	// 3�� ����
	for (int i = 1; i < 6; i++)
	{
		for (int j = (6 - i); j > 1; j--)
			printf("  ");
		for (int j = 0; j < ((i * 2) - 1); j++)
			printf("* ");
		printf("\n");
	}

	// Ǯ��
	for (int i = 0; i < 5; i++)
	{
		for (int j = 5; j > i; j--)
		{
			printf("  ");
		}

		for (int k = 0; k < 1 + (i * 2); k++)
		{
			printf("* ");
		}

		printf("\n");
	}
	
	return 0;
}