#pragma warning (disable : 4996)
#include <stdio.h>

// swap 함수 정의
void swap(int * num1, int * num2)
{
	int num3 = *num1;
	*num1 = *num2;
	*num2 = num3;
}

int main()
{
	int number1, number2;
	printf("nubmer1 을 입력하시오 : ");
	scanf("%d", &number1);
	printf("nubmer2 을 입력하시오 : ");
	scanf("%d", &number2);
	
	// swap 함수 호출
	swap(&number1, &number2);

	printf("nubmer1 = %d \n", number1);
	printf("nubmer2 = %d \n", number2);


	return 0;
}