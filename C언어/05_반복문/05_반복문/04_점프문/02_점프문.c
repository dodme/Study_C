#include <stdio.h>

int main()
{
	/*
	int i = 0;

	while (i < 10)
	{
		printf("i = %d \n", i);

		if (i == 5) continue;

		++i;
	}*/

	for (int i = 0; i < 10; ++i)
	{
		if (i == 5) continue;
		printf("i = %d \n", i);
	}
	// for 문일 경우 증감식을 실행하게 됩니다.

	return 0;
}