#include <stdio.h>

// 논리연산자
/// - 참과 거짓으로 이루어지는 진리값이 피연산자인 연산자를 의미합니다.

/// - && : AND 연산자
///   - 피연산자로 오는 두 개의 진리값이 모두 1이여야 그 결과가 1 이 됩니다.
/// - || : OR  연산자
///   - 피연산자로 오는 두 개의 진리값중 하나라도 1 이라면 그 결과가 1 이 됩니다.
/// - !  : NOT 연산자
///   - 피연산자의 진리값을 반대로 뒤집습니다.

int main()
{
	int check1 = 1 && 1;
	printf("check1 = %d \n", check1);

	int check2 = (10 > 50) && check1;
	printf("check2 = %d \n", check2);

	int check3 = check1 || check2;
	printf("check3 = %d \n", check3);

	int check4 = (50 > 40) || (1 && (100 <= 200)) || check1;
	printf("check4 = %d \n", check4);

	int check5 = !check4;
	printf("check5 = %d \n", check5);

	return 0;
}