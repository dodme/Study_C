#pragma warning (disable : 4996)
#include <stdio.h>

// swap �Լ� ����
void swap(int * num1, int * num2)
{
	int num3 = *num1;
	*num1 = *num2;
	*num2 = num3;
}

int main()
{
	int number1, number2;
	printf("nubmer1 �� �Է��Ͻÿ� : ");
	scanf("%d", &number1);
	printf("nubmer2 �� �Է��Ͻÿ� : ");
	scanf("%d", &number2);
	
	// swap �Լ� ȣ��
	swap(&number1, &number2);

	printf("nubmer1 = %d \n", number1);
	printf("nubmer2 = %d \n", number2);


	return 0;
}