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
	// for ���� ��� �������� �����ϰ� �˴ϴ�.

	return 0;
}