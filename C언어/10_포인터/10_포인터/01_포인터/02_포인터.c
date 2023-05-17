#include <stdio.h>

int main()
{
	int var1 = 10;
	int var2 = 20;

	// p 가 var1 을 가리키도록 합니다.
	int* p = &var1;

	*p += 15;

	printf("var1 = %d \n", var1);

	// p 가 var2 를 가리키도록 합니다.
	p = &var2;
	*p += 10;
	printf("var2 = %d \n", var2);

	return 0;
}