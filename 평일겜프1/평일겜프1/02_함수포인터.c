#include <stdio.h>

int Plus(int value1, int value2)
{
	return value1 + value2;
}

int Minus(int value1, int value2)
{
	return value1 - value2;
}

int main()
{
	int(*pOperator)(int, int) = Plus;

	printf("%d\n", pOperator(10, 20));

	pOperator = Minus;
	printf("%d\n", pOperator(10, 20));


	return 0;
}