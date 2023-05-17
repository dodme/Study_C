#include <stdio.h>

int main()
{
	int num1 = 1;

	while (num1 < 10)
	{
		printf("-- %d´Ü -- \n", num1);
		
		int num2 = 1;
		
		while (num2 < 10)
		{
			printf("%d X %d = %d \n", num1, num2, (num1 * num2));
			++num2;
		}
		++num1;
		printf("\n");
	}

	

	return 0;
}