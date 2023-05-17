
// 비트연산자
/// - 비트를 연산하기 위한 연산자

// << : (LEFT SHIFT)왼쪽 시프트
// >> : (RIGHT SHIFT)오른쪽 시프트
//  & : (AND)논리곱
//  | : (OR)논리합
//  ^ : (XOR)베타적 논리합
//  ~ : (NOT)보수


#include <stdio.h>
#include <string.h>
#pragma warning ( disable : 4996 )

const char* convertB(int value)
{
	static char b[9];
	b[0] = '\0';

	for (int i = 128; i > 0; i >>= 1)
		strcat(b, ((value & i) == i) ? "1" : "0");

	return b;
}


int main()
{
	// 시프트 연산자
	/// - 왼쪽 피연산자의 비트를 두 번쨰 피연산자의 수만큼
	///   왼쪽이나 오른쪽으로 이동시킵니다.
	/// - 밀린 비트는 제거하고, 생성한 비트느 모두 0으로 처리합니다.
	printf("SHIFT OPERATOR \n");
	int variable1 = 0b1100100;

	printf("variable1 = %d = 0b%s \n", variable1, convertB(variable1));

	// 왼쪽 시프트 연산 후 출력합니다.
	variable1 = variable1 << 2;
	printf("variable1 = variable << 2 \n");
	printf("variable1 = %d = 0b%s \n", variable1, convertB(variable1));

	variable1 = variable1 >> 2;
	printf("variable1 = variable >> 2 \n");
	printf("variable1 = %d = 0b%s \n", variable1, convertB(variable1));

	printf("\nAND OPERATOR \n");
	/// - 두 개의 진리값이 1 일 경우 1로 처리,
	/// - 하나라도 0 일 경우 0으로 처리합니다.
	int variable2 = 12;
	int variable3 = 8;
	int result = variable2 & variable3;

	printf("variable2 = %d = 0b%s \n", variable2, convertB(variable2));
	printf("variable3 = %d = 0b%s \n", variable3, convertB(variable3));
	printf("result = (variable2 & variable3) = %d = 0b%s \n", result, convertB(result));
	printf("\n");

	printf("\nOR OPERATOR \n");
	/// - 두 개의 진리값중 하나라도 1일 경우 1로 처리.
	/// - 옵션을 나타낼 때 자주 사용

	result = variable2 | variable3;
	printf("variable2 = %d = 0b%s \n", variable2, convertB(variable2));
	printf("variable3 = %d = 0b%s \n", variable3, convertB(variable3));
	printf("result = (variable2 | variable3) = %d = 0b%s \n", result, convertB(result));
	printf("\n");

	printf("\nXOR OPERATOR \n");
	/// - 두 진리값이 서로 다르면 1로 처리.

	result = variable2 ^ variable3;
	printf("variable2 = %d = 0b%s \n", variable2, convertB(variable2));
	printf("variable3 = %d = 0b%s \n", variable3, convertB(variable3));
	printf("result = (variable2 ^ variable3) = %d = 0b%s \n", result, convertB(result));
	printf("\n");

	printf("\nNOT OPERATOR \n");
	/// - 피연산자의 비트를 0은 1로, 1은 0으로 반전시킵니다.

	result = ~result;
	printf("result = (~result) = %d = 0b%s \n", result, convertB(result));
	printf("\n");

	return 0;
}