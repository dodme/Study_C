#include <stdio.h>

// for(�ʱ��; ���ǽ�; ������)
/// {
///		�ݺ��� �ڵ�;
/// }


int main()
{
	int result1 = 0;
	for (int i = 1; i < 11; i++)
	{
		result1 += i;
	}
	printf("%d\n", result1);
	
	printf("\n");

	int result2 = 1;
	for (int i = 10; i > 0; i--)
	{
		result2 *= i;
	}
	printf("%d\n", result2);

	printf("\n");

	for (int i = 31; i < 61; i++)
	{
		printf("%d\n", i);
	}

	return 0;
}