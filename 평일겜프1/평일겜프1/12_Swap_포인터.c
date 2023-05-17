#include <stdio.h>

void Swap(int* A, int* B)
{
	int temp = *B;
	*B = *A;
	*A = temp;
}

int main()
{
	int A = 10, B = 20;

	Swap(&A, &B);

	printf("A = %d\n", A);
	printf("B = %d\n", B);


	return 0;
}