#include <stdio.h>

// 할당 연산자 ( 복합 대입 연산자 )
/// - 왼쪽 피연산자에 오른쪽 피연산자 데이터를 할당하는 기능을 합니다.
/// - 산술 연산자, 비트 연산자에 '=' 을 붙여 사용합니다.

// [ +=, -=, *=, /=, %= ]
// [ <<=, >>=, ^=, |=, &= ]

int main()
{
	int num1 = 10;
	int num2 = 20;

	num1 += num2;
	//num1 = num1 + num2;
	
	printf("num1 = %d \n", num1);

	num1 -= num2;
	printf("num1 = %d \n", num1);

	
	return 0;
}