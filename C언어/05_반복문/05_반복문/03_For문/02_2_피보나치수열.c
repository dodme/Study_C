#pragma warning ( disable : 4996 )
#include <stdio.h>

int main()
{
	
	int num1 = 0;
	int num2 = 1;

	int count;

	printf("몇 번 출력?");
	scanf("%d", &count);

	for (int i = 0; i < count; ++i)
	{
		int temp = num1 + num2;
		num1 = num2;
		num2 = temp;
		printf("%d", num1);
	}

	printf("\n\n");

	return 0;
}