#include <stdio.h>

int main()
{
	int arrNum[30];

	for (int i = 0; i < sizeof(arrNum) / sizeof(arrNum[0]); i++)
	{
		arrNum[i] = i + 31;
		printf("arrNum[%d] : %d\n", i, arrNum[i]);
	}



	return 0;
}