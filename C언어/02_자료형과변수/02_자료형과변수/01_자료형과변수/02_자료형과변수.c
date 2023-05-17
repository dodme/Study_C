// 2진수 리터럴 형식 : 0x
// 16진수 리터럴 형식 : 0x

#include <stdio.h>

int main()
{
	printf("2진수 사용! \n");
	int number1 = 0b11110000;
	printf("number1 = %d \n", number1);

	int number2 = 0b10111010;
	printf("number2 = %d \n", number2);

	number1 = 0xF0;
	printf("number1 = %d \n", number1);

	number2 = 0xBA;
	printf("number2 = %d \n", number2);
	return 0;
}