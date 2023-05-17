#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int inputNum = 0;
	int result = 0;
	int arrNum[64] = { 0 };
	int count = 0;


	printf("¹¹°¡ ±Ã±İÇØ Honey?\n");
	scanf("%d", &inputNum);

	while(1)
	{
		result = inputNum % 2;
		inputNum /= 2;
		arrNum[count] = result;

		count++;

		if (inputNum < 1) break;
	}
	
	for (int i = (count - 1); i >= 0; i--)
	{
		printf("%d", arrNum[i]);
	}


	return 0;
}