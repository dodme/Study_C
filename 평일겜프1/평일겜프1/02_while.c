#include <stdio.h>

// 1 ~ 10 까지의 총합

int main()
{
	int count = 0;
	int total = 0;

	while (count < 10)
	{
		count++;
		total += count;
	}
	
	printf("%d\n", total);


	return 0;
}