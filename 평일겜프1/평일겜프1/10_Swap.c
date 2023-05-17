#include <stdio.h>

void Swap(int* A, int* B)
{
	int temp = *A;
	*A = *B;
	*B = temp;
}

int main()
{
	int A = 10;
	int B = 20;
	printf("A : %d\n", A);
	printf("B : %d\n", B);

	Swap(&A, &B);
	printf("A : %d\n", A);
	printf("B : %d\n", B);


	return 0;
}