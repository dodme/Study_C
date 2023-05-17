#include <stdio.h>

void Plus(int* A, int B)
{
	*A += B;
}

// 주소 복사 : Pass By Adress
// 참조 복사 : Pass By Refference

int main()
{
	int a = 10;
	
	Plus(&a, 10);

	printf("%d\n", a);

	return 0;
}