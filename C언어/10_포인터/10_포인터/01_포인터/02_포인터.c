#include <stdio.h>

int main()
{
	int var1 = 10;
	int var2 = 20;

	// p �� var1 �� ����Ű���� �մϴ�.
	int* p = &var1;

	*p += 15;

	printf("var1 = %d \n", var1);

	// p �� var2 �� ����Ű���� �մϴ�.
	p = &var2;
	*p += 10;
	printf("var2 = %d \n", var2);

	return 0;
}