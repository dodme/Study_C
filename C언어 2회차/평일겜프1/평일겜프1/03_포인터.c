#include <stdio.h>

void Plus(int* A, int B)
{
	*A += B;
}

// �ּ� ���� : Pass By Adress
// ���� ���� : Pass By Refference

int main()
{
	int a = 10;
	
	Plus(&a, 10);

	printf("%d\n", a);

	return 0;
}