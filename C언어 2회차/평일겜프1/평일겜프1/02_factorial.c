#include <stdio.h>

int main()
{
	int count = 10;
	int factorial = 1;

	while (count > 0)
	{
		factorial *= count;
		count--;
	}

	printf("%d\n", factorial);

	return 0;
}